/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class PutProjectPolicyRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API PutProjectPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutProjectPolicy"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the project that the project policy is
     * attached to.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that the project policy is
     * attached to.</p>
     */
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that the project policy is
     * attached to.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that the project policy is
     * attached to.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that the project policy is
     * attached to.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that the project policy is
     * attached to.</p>
     */
    inline PutProjectPolicyRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project that the project policy is
     * attached to.</p>
     */
    inline PutProjectPolicyRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project that the project policy is
     * attached to.</p>
     */
    inline PutProjectPolicyRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}


    /**
     * <p>A name for the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>A name for the policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>A name for the policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>A name for the policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>A name for the policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>A name for the policy.</p>
     */
    inline PutProjectPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>A name for the policy.</p>
     */
    inline PutProjectPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>A name for the policy.</p>
     */
    inline PutProjectPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The revision ID for the Project Policy. Each time you modify a policy, Amazon
     * Rekognition Custom Labels generates and assigns a new
     * <code>PolicyRevisionId</code> and then deletes the previous version of the
     * policy.</p>
     */
    inline const Aws::String& GetPolicyRevisionId() const{ return m_policyRevisionId; }

    /**
     * <p>The revision ID for the Project Policy. Each time you modify a policy, Amazon
     * Rekognition Custom Labels generates and assigns a new
     * <code>PolicyRevisionId</code> and then deletes the previous version of the
     * policy.</p>
     */
    inline bool PolicyRevisionIdHasBeenSet() const { return m_policyRevisionIdHasBeenSet; }

    /**
     * <p>The revision ID for the Project Policy. Each time you modify a policy, Amazon
     * Rekognition Custom Labels generates and assigns a new
     * <code>PolicyRevisionId</code> and then deletes the previous version of the
     * policy.</p>
     */
    inline void SetPolicyRevisionId(const Aws::String& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = value; }

    /**
     * <p>The revision ID for the Project Policy. Each time you modify a policy, Amazon
     * Rekognition Custom Labels generates and assigns a new
     * <code>PolicyRevisionId</code> and then deletes the previous version of the
     * policy.</p>
     */
    inline void SetPolicyRevisionId(Aws::String&& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = std::move(value); }

    /**
     * <p>The revision ID for the Project Policy. Each time you modify a policy, Amazon
     * Rekognition Custom Labels generates and assigns a new
     * <code>PolicyRevisionId</code> and then deletes the previous version of the
     * policy.</p>
     */
    inline void SetPolicyRevisionId(const char* value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId.assign(value); }

    /**
     * <p>The revision ID for the Project Policy. Each time you modify a policy, Amazon
     * Rekognition Custom Labels generates and assigns a new
     * <code>PolicyRevisionId</code> and then deletes the previous version of the
     * policy.</p>
     */
    inline PutProjectPolicyRequest& WithPolicyRevisionId(const Aws::String& value) { SetPolicyRevisionId(value); return *this;}

    /**
     * <p>The revision ID for the Project Policy. Each time you modify a policy, Amazon
     * Rekognition Custom Labels generates and assigns a new
     * <code>PolicyRevisionId</code> and then deletes the previous version of the
     * policy.</p>
     */
    inline PutProjectPolicyRequest& WithPolicyRevisionId(Aws::String&& value) { SetPolicyRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision ID for the Project Policy. Each time you modify a policy, Amazon
     * Rekognition Custom Labels generates and assigns a new
     * <code>PolicyRevisionId</code> and then deletes the previous version of the
     * policy.</p>
     */
    inline PutProjectPolicyRequest& WithPolicyRevisionId(const char* value) { SetPolicyRevisionId(value); return *this;}


    /**
     * <p>A resource policy to add to the model. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON policy reference</a>. </p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>A resource policy to add to the model. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON policy reference</a>. </p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>A resource policy to add to the model. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON policy reference</a>. </p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>A resource policy to add to the model. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON policy reference</a>. </p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>A resource policy to add to the model. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON policy reference</a>. </p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>A resource policy to add to the model. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON policy reference</a>. </p>
     */
    inline PutProjectPolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>A resource policy to add to the model. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON policy reference</a>. </p>
     */
    inline PutProjectPolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>A resource policy to add to the model. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON policy reference</a>. </p>
     */
    inline PutProjectPolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyRevisionId;
    bool m_policyRevisionIdHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
