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
   * <p> Specifies the conditions under which data should be updated. If an update
   * condition is specified for a request, the data will only be updated if the
   * condition is satisfied. For example, if an attribute with a specific name and
   * value exists, or if a specific attribute doesn't exist. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/UpdateCondition">AWS
   * API Reference</a></p>
   */
  class UpdateCondition
  {
  public:
    AWS_SIMPLEDB_API UpdateCondition();
    AWS_SIMPLEDB_API UpdateCondition(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SIMPLEDB_API UpdateCondition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the attribute involved in the condition.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateCondition& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateCondition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateCondition& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of an attribute. This value can only be specified when the
     * <code>Exists</code> parameter is equal to <code>true</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline UpdateCondition& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline UpdateCondition& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline UpdateCondition& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value specifying whether or not the specified attribute must exist with the
     * specified value in order for the update condition to be satisfied. Specify
     * <code>true</code> if the attribute must exist for the update condition to be
     * satisfied. Specify <code>false</code> if the attribute should not exist in order
     * for the update condition to be satisfied.</p>
     */
    inline bool GetExists() const{ return m_exists; }
    inline bool ExistsHasBeenSet() const { return m_existsHasBeenSet; }
    inline void SetExists(bool value) { m_existsHasBeenSet = true; m_exists = value; }
    inline UpdateCondition& WithExists(bool value) { SetExists(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_exists;
    bool m_existsHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
