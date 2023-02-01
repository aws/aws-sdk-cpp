/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Reserved for internal use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RegistrationMetadataItem">AWS
   * API Reference</a></p>
   */
  class RegistrationMetadataItem
  {
  public:
    AWS_SSM_API RegistrationMetadataItem();
    AWS_SSM_API RegistrationMetadataItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API RegistrationMetadataItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for internal use.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline RegistrationMetadataItem& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Reserved for internal use.</p>
     */
    inline RegistrationMetadataItem& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Reserved for internal use.</p>
     */
    inline RegistrationMetadataItem& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Reserved for internal use.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Reserved for internal use.</p>
     */
    inline RegistrationMetadataItem& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Reserved for internal use.</p>
     */
    inline RegistrationMetadataItem& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Reserved for internal use.</p>
     */
    inline RegistrationMetadataItem& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
