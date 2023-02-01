/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/SSEKMS">AWS
   * API Reference</a></p>
   */
  class SSEKMS
  {
  public:
    AWS_S3CONTROL_API SSEKMS();
    AWS_S3CONTROL_API SSEKMS(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API SSEKMS& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container for the ARN of the SSE-KMS encryption. This property is read-only
     * and follows the following format: <code>
     * arn:aws:kms:<i>us-east-1</i>:<i>example-account-id</i>:key/<i>example-9a73-4afc-8d29-8f5900cef44e</i>
     * </code> </p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>A container for the ARN of the SSE-KMS encryption. This property is read-only
     * and follows the following format: <code>
     * arn:aws:kms:<i>us-east-1</i>:<i>example-account-id</i>:key/<i>example-9a73-4afc-8d29-8f5900cef44e</i>
     * </code> </p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>A container for the ARN of the SSE-KMS encryption. This property is read-only
     * and follows the following format: <code>
     * arn:aws:kms:<i>us-east-1</i>:<i>example-account-id</i>:key/<i>example-9a73-4afc-8d29-8f5900cef44e</i>
     * </code> </p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A container for the ARN of the SSE-KMS encryption. This property is read-only
     * and follows the following format: <code>
     * arn:aws:kms:<i>us-east-1</i>:<i>example-account-id</i>:key/<i>example-9a73-4afc-8d29-8f5900cef44e</i>
     * </code> </p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>A container for the ARN of the SSE-KMS encryption. This property is read-only
     * and follows the following format: <code>
     * arn:aws:kms:<i>us-east-1</i>:<i>example-account-id</i>:key/<i>example-9a73-4afc-8d29-8f5900cef44e</i>
     * </code> </p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>A container for the ARN of the SSE-KMS encryption. This property is read-only
     * and follows the following format: <code>
     * arn:aws:kms:<i>us-east-1</i>:<i>example-account-id</i>:key/<i>example-9a73-4afc-8d29-8f5900cef44e</i>
     * </code> </p>
     */
    inline SSEKMS& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>A container for the ARN of the SSE-KMS encryption. This property is read-only
     * and follows the following format: <code>
     * arn:aws:kms:<i>us-east-1</i>:<i>example-account-id</i>:key/<i>example-9a73-4afc-8d29-8f5900cef44e</i>
     * </code> </p>
     */
    inline SSEKMS& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>A container for the ARN of the SSE-KMS encryption. This property is read-only
     * and follows the following format: <code>
     * arn:aws:kms:<i>us-east-1</i>:<i>example-account-id</i>:key/<i>example-9a73-4afc-8d29-8f5900cef44e</i>
     * </code> </p>
     */
    inline SSEKMS& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
