/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{

  /**
   * <p>A union type that specifies the data stored on the session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RuntimeSessionDataValue">AWS
   * API Reference</a></p>
   */
  class RuntimeSessionDataValue
  {
  public:
    AWS_QCONNECT_API RuntimeSessionDataValue();
    AWS_QCONNECT_API RuntimeSessionDataValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API RuntimeSessionDataValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The string value of the data stored on the session.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }
    inline RuntimeSessionDataValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline RuntimeSessionDataValue& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline RuntimeSessionDataValue& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}
  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
