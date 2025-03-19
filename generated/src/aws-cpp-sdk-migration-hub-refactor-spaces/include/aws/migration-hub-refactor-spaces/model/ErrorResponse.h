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
    AWS_MIGRATIONHUBREFACTORSPACES_API ErrorResponse() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API ErrorResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API ErrorResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the resource owner. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ErrorResponse& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional details about the error. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalDetails() const { return m_additionalDetails; }
    inline bool AdditionalDetailsHasBeenSet() const { return m_additionalDetailsHasBeenSet; }
    template<typename AdditionalDetailsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalDetails(AdditionalDetailsT&& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails = std::forward<AdditionalDetailsT>(value); }
    template<typename AdditionalDetailsT = Aws::Map<Aws::String, Aws::String>>
    ErrorResponse& WithAdditionalDetails(AdditionalDetailsT&& value) { SetAdditionalDetails(std::forward<AdditionalDetailsT>(value)); return *this;}
    template<typename AdditionalDetailsKeyT = Aws::String, typename AdditionalDetailsValueT = Aws::String>
    ErrorResponse& AddAdditionalDetails(AdditionalDetailsKeyT&& key, AdditionalDetailsValueT&& value) {
      m_additionalDetailsHasBeenSet = true; m_additionalDetails.emplace(std::forward<AdditionalDetailsKeyT>(key), std::forward<AdditionalDetailsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The error code associated with the error. </p>
     */
    inline ErrorCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(ErrorCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline ErrorResponse& WithCode(ErrorCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with the error. </p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ErrorResponse& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource. </p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    ErrorResponse& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource. </p>
     */
    inline ErrorResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ErrorResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ErrorResponse& WithResourceType(ErrorResourceType value) { SetResourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalDetails;
    bool m_additionalDetailsHasBeenSet = false;

    ErrorCode m_code{ErrorCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    ErrorResourceType m_resourceType{ErrorResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
