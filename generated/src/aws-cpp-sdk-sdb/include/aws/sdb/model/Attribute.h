/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SimpleDB
{
namespace Model
{

  /**
   * <p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/Attribute">AWS API
   * Reference</a></p>
   */
  class Attribute
  {
  public:
    AWS_SIMPLEDB_API Attribute() = default;
    AWS_SIMPLEDB_API Attribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SIMPLEDB_API Attribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * The name of the attribute.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Attribute& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p></p>
     */
    inline const Aws::String& GetAlternateNameEncoding() const { return m_alternateNameEncoding; }
    inline bool AlternateNameEncodingHasBeenSet() const { return m_alternateNameEncodingHasBeenSet; }
    template<typename AlternateNameEncodingT = Aws::String>
    void SetAlternateNameEncoding(AlternateNameEncodingT&& value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding = std::forward<AlternateNameEncodingT>(value); }
    template<typename AlternateNameEncodingT = Aws::String>
    Attribute& WithAlternateNameEncoding(AlternateNameEncodingT&& value) { SetAlternateNameEncoding(std::forward<AlternateNameEncodingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The value of the attribute.
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Attribute& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p></p>
     */
    inline const Aws::String& GetAlternateValueEncoding() const { return m_alternateValueEncoding; }
    inline bool AlternateValueEncodingHasBeenSet() const { return m_alternateValueEncodingHasBeenSet; }
    template<typename AlternateValueEncodingT = Aws::String>
    void SetAlternateValueEncoding(AlternateValueEncodingT&& value) { m_alternateValueEncodingHasBeenSet = true; m_alternateValueEncoding = std::forward<AlternateValueEncodingT>(value); }
    template<typename AlternateValueEncodingT = Aws::String>
    Attribute& WithAlternateValueEncoding(AlternateValueEncodingT&& value) { SetAlternateValueEncoding(std::forward<AlternateValueEncodingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_alternateNameEncoding;
    bool m_alternateNameEncodingHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_alternateValueEncoding;
    bool m_alternateValueEncodingHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
