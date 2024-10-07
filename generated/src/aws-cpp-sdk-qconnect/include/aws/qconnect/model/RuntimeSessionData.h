/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/RuntimeSessionDataValue.h>
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
   * <p>The list of key-value pairs that are stored on the session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RuntimeSessionData">AWS
   * API Reference</a></p>
   */
  class RuntimeSessionData
  {
  public:
    AWS_QCONNECT_API RuntimeSessionData();
    AWS_QCONNECT_API RuntimeSessionData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API RuntimeSessionData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the data stored on the session.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline RuntimeSessionData& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline RuntimeSessionData& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline RuntimeSessionData& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the data stored on the session.</p>
     */
    inline const RuntimeSessionDataValue& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const RuntimeSessionDataValue& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(RuntimeSessionDataValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline RuntimeSessionData& WithValue(const RuntimeSessionDataValue& value) { SetValue(value); return *this;}
    inline RuntimeSessionData& WithValue(RuntimeSessionDataValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    RuntimeSessionDataValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
