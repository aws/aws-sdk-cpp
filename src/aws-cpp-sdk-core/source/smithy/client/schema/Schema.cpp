/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>

#include <utility>

namespace smithy {
namespace schema {

namespace {

const char SCHEMA_ALLOC_TAG[] = "SmithySchema";

TraitMap ToTraitMap(TraitList traits) {
  TraitMap map;
  for (const auto& entry : traits) {
    map.Set(entry.key, entry.value);
  }
  return map;
}

// Compose a member id from its containing shape id and member name, e.g.
// "com.example#Foo$bar". Purely informational; used for GetId().
Aws::String MakeMemberId(const Aws::String& shapeId, const Aws::String& memberName) {
  Aws::String id = shapeId;
  id += "$";
  id += memberName;
  return id;
}

// A leaf shape with no members.
class ScalarSchema final : public Schema {
 public:
  ScalarSchema(ShapeType type, const char* id, TraitList traits)
      : Schema(traits), m_type(type), m_id(id) {}

  ShapeType GetType() const override { return m_type; }
  const char* GetId() const override { return m_id.c_str(); }

 private:
  ShapeType m_type;
  Aws::String m_id;
};

// A named member of an aggregate shape. Delegates its type to the shape it
// targets. A member normally owns its target; the non-owning overload is used
// only for recursive members, where the target is kept alive by the definition
// site so the graph does not form a reference cycle.
class MemberSchema final : public Schema {
 public:
  MemberSchema(const Aws::String& name, const Aws::String& id, int index, std::shared_ptr<const Schema> target,
               TraitMap traits)
      : m_memberName(name), m_id(id), m_memberIndex(index), m_ownedTarget(std::move(target)),
        m_target(m_ownedTarget.get()) {
    m_traits = std::move(traits);
  }

  MemberSchema(const Aws::String& name, const Aws::String& id, int index, const Schema* target, TraitMap traits)
      : m_memberName(name), m_id(id), m_memberIndex(index), m_target(target) {
    m_traits = std::move(traits);
  }

  ShapeType GetType() const override { return m_target ? m_target->GetType() : ShapeType::Structure; }
  const char* GetId() const override { return m_id.c_str(); }
  bool IsMember() const override { return true; }
  Aws::String GetMemberName() const override { return m_memberName; }
  int GetMemberIndex() const override { return m_memberIndex; }
  const Schema* GetMemberTarget() const override { return m_target; }

 private:
  Aws::String m_memberName;
  Aws::String m_id;
  int m_memberIndex;
  std::shared_ptr<const Schema> m_ownedTarget;
  const Schema* m_target;
};

// A shape that carries members (structure, union, list, map). Owns its member
// nodes and any eagerly-built target shapes; recursively referenced targets are
// kept alive by the definition site, not by this shape.
class RootSchema final : public Schema {
 public:
  RootSchema(ShapeType type, const Aws::String& id, TraitMap traits) : m_type(type), m_id(id) {
    m_traits = std::move(traits);
  }

  ShapeType GetType() const override { return m_type; }
  const char* GetId() const override { return m_id.c_str(); }

  const Schema* GetMember(const char* name) const override {
    auto it = m_nameToIndex.find(name);
    if (it == m_nameToIndex.end()) {
      return nullptr;
    }
    return m_members[it->second].get();
  }

  const Schema* GetMember(int index) const override {
    if (index < 0 || static_cast<size_t>(index) >= m_members.size()) {
      return nullptr;
    }
    return m_members[index].get();
  }

  uint16_t GetMemberCount() const override { return static_cast<uint16_t>(m_members.size()); }

  // Used only by SchemaBuilder while assembling the shape.
  void AddMember(const std::shared_ptr<const Schema>& member) {
    m_nameToIndex[member->GetMemberName()] = static_cast<int>(m_members.size());
    m_members.push_back(member);
  }

 private:
  ShapeType m_type;
  Aws::String m_id;
  Aws::Vector<std::shared_ptr<const Schema>> m_members;
  Aws::Map<Aws::String, int> m_nameToIndex;
};

std::shared_ptr<const Schema> MakeScalar(ShapeType type, const char* id, TraitList traits) {
  return Aws::MakeShared<ScalarSchema>(SCHEMA_ALLOC_TAG, type, id, traits);
}

// An empty shape of the given type, used as the target of a standalone member.
std::shared_ptr<const Schema> MakeEmptyShape(ShapeType type, const char* id) {
  switch (type) {
    case ShapeType::Structure:
    case ShapeType::Union:
    case ShapeType::List:
    case ShapeType::Map:
      return Aws::MakeShared<RootSchema>(SCHEMA_ALLOC_TAG, type, Aws::String(id), TraitMap());
    default:
      return Aws::MakeShared<ScalarSchema>(SCHEMA_ALLOC_TAG, type, id, TraitList{});
  }
}

}  // namespace

Schema::Schema(TraitList traits) : m_traits(ToTraitMap(traits)) {}

std::shared_ptr<const Schema> Schema::CreateBoolean(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::Boolean, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateByte(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::Byte, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateShort(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::Short, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateInteger(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::Integer, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateLong(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::Long, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateFloat(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::Float, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateDouble(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::Double, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateBigInteger(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::BigInteger, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateBigDecimal(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::BigDecimal, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateString(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::String, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateEnum(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::Enum, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateIntEnum(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::IntEnum, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateBlob(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::Blob, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateTimestamp(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::Timestamp, id, traits);
}
std::shared_ptr<const Schema> Schema::CreateDocument(const char* id, TraitList traits) {
  return MakeScalar(ShapeType::Document, id, traits);
}

std::shared_ptr<const Schema> Schema::CreateMember(const char* name, ShapeType targetType, TraitList traits) {
  return Aws::MakeShared<MemberSchema>(SCHEMA_ALLOC_TAG, Aws::String(name), Aws::String(name), 0,
                                       MakeEmptyShape(targetType, name), ToTraitMap(traits));
}

// A pending member captured before Build(). Exactly one of eagerTarget /
// deferredTarget is set.
class SchemaBuilder::SchemaBuilderImpl {
 public:
  SchemaBuilderImpl(ShapeType type, const char* id, TraitList traits)
      : m_type(type), m_id(id), m_traits(ToTraitMap(traits)) {}

  struct PendingMember {
    Aws::String name;
    TraitMap traits;
    std::shared_ptr<const Schema> eagerTarget;
    SchemaBuilderImpl* deferredTarget = nullptr;
  };

  void AddMember(const char* name, std::shared_ptr<const Schema> target, TraitList traits) {
    PendingMember member;
    member.name = name;
    member.traits = ToTraitMap(traits);
    member.eagerTarget = std::move(target);
    m_members.push_back(std::move(member));
  }

  void AddMember(const char* name, SchemaBuilderImpl* target, TraitList traits) {
    PendingMember member;
    member.name = name;
    member.traits = ToTraitMap(traits);
    member.deferredTarget = target;
    m_members.push_back(std::move(member));
  }

  std::shared_ptr<const Schema> Build() {
    if (m_builtShape) {
      return m_builtShape;
    }

    // Publish the shell before resolving members so a member that targets this
    // same shape (directly or transitively) sees the in-progress shape rather
    // than recursing forever.
    auto shell = Aws::MakeShared<RootSchema>(SCHEMA_ALLOC_TAG, m_type, m_id, m_traits);
    m_builtShape = shell;

    int index = 0;
    for (auto& pending : m_members) {
      std::shared_ptr<const Schema> member;
      if (pending.eagerTarget) {
        // Non-recursive member owns its target directly.
        member = Aws::MakeShared<MemberSchema>(SCHEMA_ALLOC_TAG, pending.name, MakeMemberId(m_id, pending.name), index,
                                               pending.eagerTarget, pending.traits);
      } else if (pending.deferredTarget != nullptr) {
        // Recursive member references a target kept alive by the definition site.
        auto target = pending.deferredTarget->Build();
        member = Aws::MakeShared<MemberSchema>(SCHEMA_ALLOC_TAG, pending.name, MakeMemberId(m_id, pending.name), index,
                                               target.get(), pending.traits);
      }
      shell->AddMember(member);
      ++index;
    }

    return m_builtShape;
  }

 private:
  ShapeType m_type;
  Aws::String m_id;
  TraitMap m_traits;
  Aws::Vector<PendingMember> m_members;
  std::shared_ptr<const Schema> m_builtShape;
};

SchemaBuilder Schema::StructureBuilder(const char* id, TraitList traits) {
  return SchemaBuilder(Aws::MakeUnique<SchemaBuilder::SchemaBuilderImpl>(SCHEMA_ALLOC_TAG, ShapeType::Structure, id, traits));
}
SchemaBuilder Schema::UnionBuilder(const char* id, TraitList traits) {
  return SchemaBuilder(Aws::MakeUnique<SchemaBuilder::SchemaBuilderImpl>(SCHEMA_ALLOC_TAG, ShapeType::Union, id, traits));
}
SchemaBuilder Schema::ListBuilder(const char* id, TraitList traits) {
  return SchemaBuilder(Aws::MakeUnique<SchemaBuilder::SchemaBuilderImpl>(SCHEMA_ALLOC_TAG, ShapeType::List, id, traits));
}
SchemaBuilder Schema::MapBuilder(const char* id, TraitList traits) {
  return SchemaBuilder(Aws::MakeUnique<SchemaBuilder::SchemaBuilderImpl>(SCHEMA_ALLOC_TAG, ShapeType::Map, id, traits));
}

SchemaBuilder::SchemaBuilder(Aws::UniquePtr<SchemaBuilderImpl> impl) : m_impl(std::move(impl)) {}
SchemaBuilder::~SchemaBuilder() = default;
SchemaBuilder::SchemaBuilder(SchemaBuilder&&) noexcept = default;
SchemaBuilder& SchemaBuilder::operator=(SchemaBuilder&&) noexcept = default;

SchemaBuilder& SchemaBuilder::PutMember(const char* name, std::shared_ptr<const Schema> target, TraitList traits) {
  m_impl->AddMember(name, std::move(target), traits);
  return *this;
}

SchemaBuilder& SchemaBuilder::PutMember(const char* name, SchemaBuilder& target, TraitList traits) {
  m_impl->AddMember(name, target.m_impl.get(), traits);
  return *this;
}

std::shared_ptr<const Schema> SchemaBuilder::Build() { return m_impl->Build(); }

}  // namespace schema
}  // namespace smithy
