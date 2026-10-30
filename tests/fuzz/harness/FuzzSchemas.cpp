/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <harness/FuzzSchemas.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/XmlTraits.h>

#include <utility>

namespace smithy {
namespace schema {
namespace fuzz {

namespace {

const char ALLOC_TAG[] = "FuzzSchemas";

template <typename T, typename... Args>
TraitEntry MakeTrait(Args&&... args) {
  return TraitEntry{T::KEY(), Aws::MakeShared<T>(ALLOC_TAG, std::forward<Args>(args)...)};
}

class ScalarKind {
 public:
  ScalarKind(ShapeType type, const char* name) : m_type(type), m_name(name) {}
  ShapeType Type() const { return m_type; }
  const Aws::String& Name() const { return m_name; }

 private:
  ShapeType m_type;
  Aws::String m_name;
};

const Aws::Vector<ScalarKind>& Scalars() {
  static const Aws::Vector<ScalarKind> scalars = {
      {ShapeType::Boolean, "Boolean"},   {ShapeType::Byte, "Byte"},     {ShapeType::Short, "Short"},
      {ShapeType::Integer, "Integer"},   {ShapeType::Long, "Long"},     {ShapeType::Float, "Float"},
      {ShapeType::Double, "Double"},     {ShapeType::String, "String"}, {ShapeType::Enum, "Enum"},
      {ShapeType::IntEnum, "IntEnum"},   {ShapeType::Blob, "Blob"},     {ShapeType::Timestamp, "Timestamp"},
      {ShapeType::Document, "Document"},
  };
  return scalars;
}

std::shared_ptr<const Schema> CreateScalar(ShapeType type, const char* id, TraitList traits = {}) {
  switch (type) {
    case ShapeType::Boolean:
      return Schema::CreateBoolean(id, traits);
    case ShapeType::Byte:
      return Schema::CreateByte(id, traits);
    case ShapeType::Short:
      return Schema::CreateShort(id, traits);
    case ShapeType::Integer:
      return Schema::CreateInteger(id, traits);
    case ShapeType::Long:
      return Schema::CreateLong(id, traits);
    case ShapeType::Float:
      return Schema::CreateFloat(id, traits);
    case ShapeType::Double:
      return Schema::CreateDouble(id, traits);
    case ShapeType::String:
      return Schema::CreateString(id, traits);
    case ShapeType::Enum:
      return Schema::CreateEnum(id, traits);
    case ShapeType::IntEnum:
      return Schema::CreateIntEnum(id, traits);
    case ShapeType::Blob:
      return Schema::CreateBlob(id, traits);
    case ShapeType::Timestamp:
      return Schema::CreateTimestamp(id, traits);
    default:
      return Schema::CreateDocument(id, traits);
  }
}

class Registry final {
 public:
  Registry() {
    AddScalarWrappers();
    AddNested();
    AddRecursive();
    AddJsonTraits();
    AddXmlTraits();
    AddContainerTraits();
    AddQueryTraits();
    m_documentHolder = Schema::StructureBuilder("DocumentHolder").PutMember("payload", m_scalars.at(ShapeType::Document)).Build();
  }

  const Aws::Vector<std::shared_ptr<const Schema>>& Roots() const { return m_roots; }
  const std::shared_ptr<const Schema>& DocumentHolder() const { return m_documentHolder; }

 private:
  void AddScalarWrappers() {
    for (const auto& scalar : Scalars()) {
      const auto shape = CreateScalar(scalar.Type(), scalar.Name().c_str());
      m_scalars[scalar.Type()] = shape;
      const auto list = Schema::ListBuilder((scalar.Name() + "List").c_str()).PutMember("member", shape).Build();
      const auto map =
          Schema::MapBuilder(("String" + scalar.Name() + "Map").c_str()).PutMember("key", m_mapKey).PutMember("value", shape).Build();
      m_lists[scalar.Type()] = list;
      m_maps[scalar.Type()] = map;
      m_roots.push_back(Schema::StructureBuilder((scalar.Name() + "Value").c_str()).PutMember("value", shape).Build());
      m_roots.push_back(Schema::StructureBuilder((scalar.Name() + "ListValue").c_str()).PutMember("values", list).Build());
      m_roots.push_back(Schema::StructureBuilder(("String" + scalar.Name() + "MapValue").c_str()).PutMember("values", map).Build());
    }
  }

  void AddNested() {
    m_simpleNested = Schema::StructureBuilder("SimpleNested")
                         .PutMember("str", m_scalars.at(ShapeType::String))
                         .PutMember("int", m_scalars.at(ShapeType::Integer))
                         .Build();
    const auto testUnion = Schema::UnionBuilder("TestUnion")
                               .PutMember("stringVariant", m_scalars.at(ShapeType::String))
                               .PutMember("intVariant", m_scalars.at(ShapeType::Integer))
                               .PutMember("structVariant", m_simpleNested)
                               .Build();
    m_roots.push_back(m_simpleNested);
    m_roots.push_back(testUnion);
    m_roots.push_back(Schema::StructureBuilder("UnionValue").PutMember("value", testUnion).Build());
    m_roots.push_back(Schema::StructureBuilder("NestedStructureValue")
                          .PutMember("str", m_scalars.at(ShapeType::String))
                          .PutMember("int", m_scalars.at(ShapeType::Integer))
                          .PutMember("long", m_scalars.at(ShapeType::Long))
                          .PutMember("bool", m_scalars.at(ShapeType::Boolean))
                          .PutMember("flt", m_scalars.at(ShapeType::Float))
                          .PutMember("dbl", m_scalars.at(ShapeType::Double))
                          .PutMember("blob", m_scalars.at(ShapeType::Blob))
                          .PutMember("ts", m_scalars.at(ShapeType::Timestamp))
                          .PutMember("list", m_lists.at(ShapeType::String))
                          .PutMember("map", m_maps.at(ShapeType::Integer))
                          .PutMember("nested", m_simpleNested)
                          .PutMember("union", testUnion)
                          .Build());
  }

  void AddRecursive() {
    auto node = Schema::StructureBuilder("Node");
    auto nodeList = Schema::ListBuilder("NodeList");
    auto nodeMap = Schema::MapBuilder("StringNodeMap");
    nodeList.PutMember("member", node);
    nodeMap.PutMember("key", m_scalars.at(ShapeType::String)).PutMember("value", node);
    node.PutMember("value", m_scalars.at(ShapeType::Integer))
        .PutMember("child", node)
        .PutMember("children", nodeList)
        .PutMember("byName", nodeMap);
    m_roots.push_back(node.Build());
    // Deferred members hold weak references; keep the list and map shapes alive after the builders go.
    m_keepAlive.push_back(nodeList.Build());
    m_keepAlive.push_back(nodeMap.Build());
  }

  void AddJsonTraits() {
    m_roots.push_back(Schema::StructureBuilder("JsonNamed")
                          .PutMember("renamed", m_scalars.at(ShapeType::String), {MakeTrait<JsonNameTrait>("Renamed Key")})
                          .PutMember("quoted", m_scalars.at(ShapeType::Integer), {MakeTrait<JsonNameTrait>("q\"u\\o")})
                          .PutMember("plain", m_scalars.at(ShapeType::String))
                          .Build());
    const auto ts = m_scalars.at(ShapeType::Timestamp);
    m_roots.push_back(Schema::StructureBuilder("Timestamps")
                          .PutMember("epoch", ts, {MakeTrait<TimestampFormatTrait>(TimestampFormatTrait::Format::EPOCH_SECONDS)})
                          .PutMember("dateTime", ts, {MakeTrait<TimestampFormatTrait>(TimestampFormatTrait::Format::DATE_TIME)})
                          .PutMember("httpDate", ts, {MakeTrait<TimestampFormatTrait>(TimestampFormatTrait::Format::HTTP_DATE)})
                          .PutMember("plain", ts)
                          .Build());
  }

  void AddXmlTraits() {
    m_roots.push_back(
        Schema::StructureBuilder("XmlTraits",
                                 {MakeTrait<XmlNameTrait>("XmlRoot"), MakeTrait<XmlNamespaceTrait>("https://example.com/fuzz")})
            .PutMember("attr", m_scalars.at(ShapeType::String), {MakeTrait<XmlAttributeTrait>()})
            .PutMember("intAttr", m_scalars.at(ShapeType::Integer), {MakeTrait<XmlAttributeTrait>(), MakeTrait<XmlNameTrait>("int-attr")})
            .PutMember("fltAttr", m_scalars.at(ShapeType::Float), {MakeTrait<XmlAttributeTrait>()})
            .PutMember("dblAttr", m_scalars.at(ShapeType::Double), {MakeTrait<XmlAttributeTrait>()})
            .PutMember("boolAttr", m_scalars.at(ShapeType::Boolean), {MakeTrait<XmlAttributeTrait>()})
            .PutMember("tsAttr", m_scalars.at(ShapeType::Timestamp), {MakeTrait<XmlAttributeTrait>()})
            .PutMember("nsMember", m_scalars.at(ShapeType::String), {MakeTrait<XmlNamespaceTrait>("https://example.com/ns", "p")})
            .PutMember("renamed", m_scalars.at(ShapeType::String), {MakeTrait<XmlNameTrait>("Renamed")})
            .PutMember("flatList", m_lists.at(ShapeType::String), {MakeTrait<XmlFlattenedTrait>()})
            .PutMember("flatMap", m_maps.at(ShapeType::String), {MakeTrait<XmlFlattenedTrait>()})
            .PutMember("namedList", m_lists.at(ShapeType::Integer), {MakeTrait<XmlListItemNameTrait>("item")})
            .PutMember("namedMap", m_maps.at(ShapeType::Integer),
                       {MakeTrait<XmlMapEntryNameTrait>("pair"), MakeTrait<XmlMapKeyNameTrait>("k"), MakeTrait<XmlMapValueNameTrait>("v")})
            .PutMember("nested", m_simpleNested, {MakeTrait<XmlNameTrait>("Inner")})
            .Build());
  }

  void AddContainerTraits() {
    const auto ts = m_scalars.at(ShapeType::Timestamp);
    const auto dateTimeList = Schema::ListBuilder("DateTimeList")
                                  .PutMember("member", ts, {MakeTrait<TimestampFormatTrait>(TimestampFormatTrait::Format::DATE_TIME)})
                                  .Build();
    const auto httpDateMap = Schema::MapBuilder("StringHttpDateMap")
                                 .PutMember("key", m_mapKey)
                                 .PutMember("value", ts, {MakeTrait<TimestampFormatTrait>(TimestampFormatTrait::Format::HTTP_DATE)})
                                 .Build();
    const auto epochList = Schema::ListBuilder("EpochSecondsList")
                               .PutMember("member", ts, {MakeTrait<TimestampFormatTrait>(TimestampFormatTrait::Format::EPOCH_SECONDS)})
                               .Build();
    const auto enumKeyMap = Schema::MapBuilder("EnumStringMap")
                                .PutMember("key", m_scalars.at(ShapeType::Enum))
                                .PutMember("value", m_scalars.at(ShapeType::String))
                                .Build();
    m_roots.push_back(Schema::StructureBuilder("ContainerTraits")
                          .PutMember("dateTimes", dateTimeList)
                          .PutMember("httpDates", httpDateMap)
                          .PutMember("epochs", epochList)
                          .PutMember("byEnum", enumKeyMap)
                          .Build());
  }

  void AddQueryTraits() {
    m_roots.push_back(Schema::StructureBuilder("Ec2Named")
                          .PutMember("renamed", m_scalars.at(ShapeType::String), {MakeTrait<Ec2QueryNameTrait>("CustomName")})
                          .PutMember("both", m_scalars.at(ShapeType::Integer),
                                     {MakeTrait<Ec2QueryNameTrait>("Ec2Both"), MakeTrait<XmlNameTrait>("xmlBoth")})
                          .PutMember("plain", m_scalars.at(ShapeType::String))
                          .Build());
  }

  std::shared_ptr<const Schema> m_mapKey = Schema::CreateString("String");
  Aws::Map<ShapeType, std::shared_ptr<const Schema>> m_scalars;
  Aws::Map<ShapeType, std::shared_ptr<const Schema>> m_lists;
  Aws::Map<ShapeType, std::shared_ptr<const Schema>> m_maps;
  std::shared_ptr<const Schema> m_simpleNested;
  std::shared_ptr<const Schema> m_documentHolder;
  Aws::Vector<std::shared_ptr<const Schema>> m_roots;
  Aws::Vector<std::shared_ptr<const Schema>> m_keepAlive;
};

const Registry& GetRegistry() {
  static const Registry registry;
  return registry;
}

}  // namespace

const Aws::Vector<std::shared_ptr<const Schema>>& FuzzSchemas() { return GetRegistry().Roots(); }

std::shared_ptr<const Schema> FindFuzzSchema(const Aws::String& id) {
  for (const auto& root : FuzzSchemas()) {
    if (id == root->GetId()) {
      return root;
    }
  }
  return nullptr;
}

std::shared_ptr<const Schema> DocumentHolderSchema() { return GetRegistry().DocumentHolder(); }

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
