#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>

#include <cstdint>

namespace smithy {
namespace schema {

struct XmlTraits;

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

class Schema {
 public:
  Schema() = default;
  Schema(const Aws::String& memberName, ShapeType type) : m_type(type), m_memberName(memberName) {}

  ShapeType GetType() const { return m_type; }
  const char* GetId() const { return m_id; }
  Aws::String GetMemberName() const { return m_memberName; }
  int GetMemberIndex() const { return m_memberIndex; }
  bool IsMember() const { return !m_memberName.empty(); }

  const Schema* GetMember(const char* name) const;
  const Schema* GetMember(int index) const;

  uint16_t GetMemberCount() const { return m_memberCount; }

  const XmlTraits* GetXmlTraits() const { return m_xmlTraits; }

  Schema& WithXmlTraits(const XmlTraits* traits) {
    m_xmlTraits = traits;
    return *this;
  }

 private:
  const char* m_id = nullptr;
  ShapeType m_type = ShapeType::Structure;
  Aws::String m_memberName;
  int m_memberIndex = 0;
  const Schema* m_members = nullptr;
  uint16_t m_memberCount = 0;
  const XmlTraits* m_xmlTraits = nullptr;
};

}  // namespace schema
}  // namespace smithy
