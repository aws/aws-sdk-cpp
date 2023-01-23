/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorCode.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorResourceType.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   * <p>Error associated with a resource returned for a Get or List resource
   * response. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ErrorResponse">AWS
   * API Reference</a></p>
   */
  class ErrorResponse
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ErrorResponse();
    AWS_MIGRATIONHUBREFACTORSPACES_API ErrorResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API ErrorResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID of the resource owner. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the resource owner. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the resource owner. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the resource owner. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the resource owner. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the resource owner. </p>
     */
    inline ErrorResponse& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the resource owner. </p>
     */
    inline ErrorResponse& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the resource owner. </p>
     */
    inline ErrorResponse& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Additional details about the error. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalDetails() const{ return m_additionalDetails; }

    /**
     * <p>Additional details about the error. </p>
     */
    inline bool AdditionalDetailsHasBeenSet() const { return m_additionalDetailsHasBeenSet; }

    /**
     * <p>Additional details about the error. </p>
     */
    inline void SetAdditionalDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails = value; }

    /**
     * <p>Additional details about the error. </p>
     */
    inline void SetAdditionalDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails = std::move(value); }

    /**
     * <p>Additional details about the error. </p>
     */
    inline ErrorResponse& WithAdditionalDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalDetails(value); return *this;}

    /**
     * <p>Additional details about the error. </p>
     */
    inline ErrorResponse& WithAdditionalDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalDetails(std::move(value)); return *this;}

    /**
     * <p>Additional details about the error. </p>
     */
    inline ErrorResponse& AddAdditionalDetails(const Aws::String& key, const Aws::String& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails.emplace(key, value); return *this; }

    /**
     * <p>Additional details about the error. </p>
     */
    inline ErrorResponse& AddAdditionalDetails(Aws::String&& key, const Aws::String& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional details about the error. </p>
     */
    inline ErrorResponse& AddAdditionalDetails(const Aws::String& key, Aws::String&& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional details about the error. </p>
     */
    inline ErrorResponse& AddAdditionalDetails(Aws::String&& key, Aws::String&& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional details about the error. </p>
     */
    inline ErrorResponse& AddAdditionalDetails(const char* key, Aws::String&& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional details about the error. </p>
     */
    inline ErrorResponse& AddAdditionalDetails(Aws::String&& key, const char* value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional details about the error. </p>
     */
    inline ErrorResponse& AddAdditionalDetails(const char* key, const char* value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails.emplace(key, value); return *this; }


    /**
     * <p>The error code associated with the error. </p>
     */
    inline const ErrorCode& GetCode() const{ return m_code; }

    /**
     * <p>The error code associated with the error. </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code associated with the error. </p>
     */
    inline void SetCode(const ErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code associated with the error. </p>
     */
    inline void SetCode(ErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code associated with the error. </p>
     */
    inline ErrorResponse& WithCode(const ErrorCode& value) { SetCode(value); return *this;}

    /**
     * <p>The error code associated with the error. </p>
     */
    inline ErrorResponse& WithCode(ErrorCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The message associated with the error. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message associated with the error. </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message associated with the error. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message associated with the error. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message associated with the error. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message associated with the error. </p>
     */
    inline ErrorResponse& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message associated with the error. </p>
     */
    inline ErrorResponse& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message associated with the error. </p>
     */
    inline ErrorResponse& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The ID of the resource. </p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The ID of the resource. </p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The ID of the resource. </p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The ID of the resource. </p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The ID of the resource. </p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The ID of the resource. </p>
     */
    inline ErrorResponse& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The ID of the resource. </p>
     */
    inline ErrorResponse& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource. </p>
     */
    inline ErrorResponse& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The type of resource. </p>
     */
    inline const ErrorResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource. </p>
     */
    inline void SetResourceType(const ErrorResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource. </p>
     */
    inline void SetResourceType(ErrorResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource. </p>
     */
    inline ErrorResponse& WithResourceType(const ErrorResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource. </p>
     */
    inline ErrorResponse& WithResourceType(ErrorResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalDetails;
    bool m_additionalDetailsHasBeenSet = false;

    ErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    ErrorResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
