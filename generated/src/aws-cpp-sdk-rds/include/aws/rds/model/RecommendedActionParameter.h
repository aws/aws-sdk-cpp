/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>A single parameter to use with the <code>RecommendedAction</code> API
   * operation to apply the action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RecommendedActionParameter">AWS
   * API Reference</a></p>
   */
  class RecommendedActionParameter
  {
  public:
    AWS_RDS_API RecommendedActionParameter();
    AWS_RDS_API RecommendedActionParameter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API RecommendedActionParameter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The key of the parameter to use with the <code>RecommendedAction</code> API
     * operation.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline RecommendedActionParameter& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline RecommendedActionParameter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline RecommendedActionParameter& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the parameter to use with the <code>RecommendedAction</code> API
     * operation.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline RecommendedActionParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline RecommendedActionParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline RecommendedActionParameter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
