/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Describes a project policy in the response from <a>ListProjectPolicies</a>.
   * </p> <p> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ProjectPolicy">AWS
   * API Reference</a></p>
   */
  class ProjectPolicy
  {
  public:
    AWS_REKOGNITION_API ProjectPolicy();
    AWS_REKOGNITION_API ProjectPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ProjectPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the project to which the project policy is
     * attached.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project to which the project policy is
     * attached.</p>
     */
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project to which the project policy is
     * attached.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project to which the project policy is
     * attached.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project to which the project policy is
     * attached.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project to which the project policy is
     * attached.</p>
     */
    inline ProjectPolicy& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project to which the project policy is
     * attached.</p>
     */
    inline ProjectPolicy& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project to which the project policy is
     * attached.</p>
     */
    inline ProjectPolicy& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}


    /**
     * <p>The name of the project policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the project policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the project policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the project policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the project policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the project policy.</p>
     */
    inline ProjectPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the project policy.</p>
     */
    inline ProjectPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the project policy.</p>
     */
    inline ProjectPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The revision ID of the project policy.</p>
     */
    inline const Aws::String& GetPolicyRevisionId() const{ return m_policyRevisionId; }

    /**
     * <p>The revision ID of the project policy.</p>
     */
    inline bool PolicyRevisionIdHasBeenSet() const { return m_policyRevisionIdHasBeenSet; }

    /**
     * <p>The revision ID of the project policy.</p>
     */
    inline void SetPolicyRevisionId(const Aws::String& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = value; }

    /**
     * <p>The revision ID of the project policy.</p>
     */
    inline void SetPolicyRevisionId(Aws::String&& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = std::move(value); }

    /**
     * <p>The revision ID of the project policy.</p>
     */
    inline void SetPolicyRevisionId(const char* value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId.assign(value); }

    /**
     * <p>The revision ID of the project policy.</p>
     */
    inline ProjectPolicy& WithPolicyRevisionId(const Aws::String& value) { SetPolicyRevisionId(value); return *this;}

    /**
     * <p>The revision ID of the project policy.</p>
     */
    inline ProjectPolicy& WithPolicyRevisionId(Aws::String&& value) { SetPolicyRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision ID of the project policy.</p>
     */
    inline ProjectPolicy& WithPolicyRevisionId(const char* value) { SetPolicyRevisionId(value); return *this;}


    /**
     * <p>The JSON document for the project policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The JSON document for the project policy.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>The JSON document for the project policy.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The JSON document for the project policy.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The JSON document for the project policy.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The JSON document for the project policy.</p>
     */
    inline ProjectPolicy& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON document for the project policy.</p>
     */
    inline ProjectPolicy& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON document for the project policy.</p>
     */
    inline ProjectPolicy& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>The Unix datetime for the creation of the project policy.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The Unix datetime for the creation of the project policy.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The Unix datetime for the creation of the project policy.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The Unix datetime for the creation of the project policy.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The Unix datetime for the creation of the project policy.</p>
     */
    inline ProjectPolicy& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The Unix datetime for the creation of the project policy.</p>
     */
    inline ProjectPolicy& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The Unix datetime for when the project policy was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>The Unix datetime for when the project policy was last updated. </p>
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * <p>The Unix datetime for when the project policy was last updated. </p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>The Unix datetime for when the project policy was last updated. </p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p>The Unix datetime for when the project policy was last updated. </p>
     */
    inline ProjectPolicy& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>The Unix datetime for when the project policy was last updated. </p>
     */
    inline ProjectPolicy& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyRevisionId;
    bool m_policyRevisionIdHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
