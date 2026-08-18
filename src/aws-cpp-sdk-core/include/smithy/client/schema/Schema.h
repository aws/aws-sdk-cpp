#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Optional.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/TraitMap.h>

#include <cstdint>
#include <initializer_list>
#include <memory>

namespace smithy {
namespace schema {

class SchemaBuilder;

enum class ShapeType : uint8_t {
  Boolean,
  Byte,
  Short,
  Integer,
  Long,
  Float,
  Double,
  BigInteger,
  BigDecimal,
  String,
  Enum,
  IntEnum,
  Blob,
  Timestamp,
  Document,
  List,
  Map,
  Structure,
  Union,
  Operation,
  Resource,
  Service
};

// A single trait supplied at construction time. Schemas are immutable once
// built, so traits are attached through the factories and SchemaBuilder rather
// than mutated afterwards.
struct TraitEntry {
  const TraitKeyBase& key;
  std::shared_ptr<const Trait> value;
};
using TraitList = std::initializer_list<TraitEntry>;

// Abstract, immutable description of a shape. Concrete variants (scalar, member,
// structure/list/map/union root) live in the translation unit and are reached
// only through the factories below and SchemaBuilder. Serializers and
// deserializers hold a Schema only by const reference.
class SMITHY_API Schema {
 public:
  virtual ~Schema() = default;

  virtual ShapeType GetType() const = 0;
  virtual const char* GetId() const = 0;

  virtual bool IsMember() const { return false; }
  virtual Aws::String GetMemberName() const { return {}; }
  virtual int GetMemberIndex() const { return 0; }
  virtual Aws::Crt::Optional<std::shared_ptr<const Schema>> GetMemberTarget() const { return {}; }

  virtual Aws::Crt::Optional<std::shared_ptr<const Schema>> GetMember(const char* /*name*/) const { return {}; }
  virtual Aws::Crt::Optional<std::shared_ptr<const Schema>> GetMember(int /*index*/) const { return {}; }
  virtual uint16_t GetMemberCount() const { return 0; }

  template <typename T>
  std::shared_ptr<const T> GetTrait(const TraitKey<T>& key) const {
    return m_traits.Get(key);
  }

  bool HasTrait(const TraitKeyBase& key) const { return m_traits.Has(key); }

  // Scalar factories. No members, so no builder is needed.
  static std::shared_ptr<const Schema> CreateBoolean(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateByte(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateShort(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateInteger(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateLong(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateFloat(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateDouble(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateBigInteger(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateBigDecimal(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateString(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateEnum(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateIntEnum(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateBlob(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateTimestamp(const char* id, TraitList traits = {});
  static std::shared_ptr<const Schema> CreateDocument(const char* id, TraitList traits = {});

  // Standalone member node targeting an (otherwise empty) shape of targetType.
  // Convenience for the positional serializer/deserializer API, where a caller
  // hands members one at a time rather than driving them off a parent shape.
  static std::shared_ptr<const Schema> CreateMember(const char* name, ShapeType targetType, TraitList traits = {});

  // Aggregate builders. Shapes that carry members are assembled incrementally.
  static SchemaBuilder StructureBuilder(const char* id, TraitList traits = {});
  static SchemaBuilder UnionBuilder(const char* id, TraitList traits = {});
  static SchemaBuilder ListBuilder(const char* id, TraitList traits = {});
  static SchemaBuilder MapBuilder(const char* id, TraitList traits = {});

 protected:
  Schema() = default;
  explicit Schema(TraitList traits);

  TraitMap m_traits;

 private:
  Schema(const Schema&) = delete;
  Schema& operator=(const Schema&) = delete;
};

}  // namespace schema
}  // namespace smithy
