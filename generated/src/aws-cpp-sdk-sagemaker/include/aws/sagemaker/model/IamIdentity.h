/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The IAM Identity details associated with the user. These details are
   * associated with model package groups, model packages and project entities
   * only.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/IamIdentity">AWS
   * API Reference</a></p>
   */
  class IamIdentity
  {
  public:
    AWS_SAGEMAKER_API IamIdentity();
    AWS_SAGEMAKER_API IamIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API IamIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM identity.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM identity.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM identity.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM identity.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM identity.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM identity.</p>
     */
    inline IamIdentity& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM identity.</p>
     */
    inline IamIdentity& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM identity.</p>
     */
    inline IamIdentity& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the principal that assumes the IAM identity.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The ID of the principal that assumes the IAM identity.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The ID of the principal that assumes the IAM identity.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The ID of the principal that assumes the IAM identity.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The ID of the principal that assumes the IAM identity.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The ID of the principal that assumes the IAM identity.</p>
     */
    inline IamIdentity& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The ID of the principal that assumes the IAM identity.</p>
     */
    inline IamIdentity& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the principal that assumes the IAM identity.</p>
     */
    inline IamIdentity& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The person or application which assumes the IAM identity.</p>
     */
    inline const Aws::String& GetSourceIdentity() const{ return m_sourceIdentity; }

    /**
     * <p>The person or application which assumes the IAM identity.</p>
     */
    inline bool SourceIdentityHasBeenSet() const { return m_sourceIdentityHasBeenSet; }

    /**
     * <p>The person or application which assumes the IAM identity.</p>
     */
    inline void SetSourceIdentity(const Aws::String& value) { m_sourceIdentityHasBeenSet = true; m_sourceIdentity = value; }

    /**
     * <p>The person or application which assumes the IAM identity.</p>
     */
    inline void SetSourceIdentity(Aws::String&& value) { m_sourceIdentityHasBeenSet = true; m_sourceIdentity = std::move(value); }

    /**
     * <p>The person or application which assumes the IAM identity.</p>
     */
    inline void SetSourceIdentity(const char* value) { m_sourceIdentityHasBeenSet = true; m_sourceIdentity.assign(value); }

    /**
     * <p>The person or application which assumes the IAM identity.</p>
     */
    inline IamIdentity& WithSourceIdentity(const Aws::String& value) { SetSourceIdentity(value); return *this;}

    /**
     * <p>The person or application which assumes the IAM identity.</p>
     */
    inline IamIdentity& WithSourceIdentity(Aws::String&& value) { SetSourceIdentity(std::move(value)); return *this;}

    /**
     * <p>The person or application which assumes the IAM identity.</p>
     */
    inline IamIdentity& WithSourceIdentity(const char* value) { SetSourceIdentity(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_sourceIdentity;
    bool m_sourceIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
