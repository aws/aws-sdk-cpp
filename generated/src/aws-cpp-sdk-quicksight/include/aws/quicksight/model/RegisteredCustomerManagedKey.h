/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A customer managed key structure that contains the information listed below:
   * </p> <ul> <li> <p> <code>KeyArn</code> - The ARN of a KMS key that is registered
   * to a Amazon QuickSight account for encryption and decryption use.</p> </li> <li>
   * <p> <code>DefaultKey</code> - Indicates whether the current key is set as the
   * default key for encryption and decryption use.</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredCustomerManagedKey">AWS
   * API Reference</a></p>
   */
  class RegisteredCustomerManagedKey
  {
  public:
    AWS_QUICKSIGHT_API RegisteredCustomerManagedKey();
    AWS_QUICKSIGHT_API RegisteredCustomerManagedKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RegisteredCustomerManagedKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the KMS key that is registered to a Amazon QuickSight account for
     * encryption and decryption use.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }
    inline void SetKeyArn(const Aws::String& value) { m_keyArnHasBeenSet = true; m_keyArn = value; }
    inline void SetKeyArn(Aws::String&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::move(value); }
    inline void SetKeyArn(const char* value) { m_keyArnHasBeenSet = true; m_keyArn.assign(value); }
    inline RegisteredCustomerManagedKey& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}
    inline RegisteredCustomerManagedKey& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}
    inline RegisteredCustomerManagedKey& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a <code>RegisteredCustomerManagedKey</code> is set as the
     * default key for encryption and decryption use.</p>
     */
    inline bool GetDefaultKey() const{ return m_defaultKey; }
    inline bool DefaultKeyHasBeenSet() const { return m_defaultKeyHasBeenSet; }
    inline void SetDefaultKey(bool value) { m_defaultKeyHasBeenSet = true; m_defaultKey = value; }
    inline RegisteredCustomerManagedKey& WithDefaultKey(bool value) { SetDefaultKey(value); return *this;}
    ///@}
  private:

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;

    bool m_defaultKey;
    bool m_defaultKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
