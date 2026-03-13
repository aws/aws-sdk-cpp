/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/CodeGenerationOutputFormatType.h>

#include <utility>

namespace Aws {
namespace mgn {
namespace Model {

/**
 */
class StartNetworkMigrationCodeGenerationRequest : public MgnRequest {
 public:
  AWS_MGN_API StartNetworkMigrationCodeGenerationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartNetworkMigrationCodeGeneration"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the network migration execution.</p>
   */
  inline const Aws::String& GetNetworkMigrationExecutionID() const { return m_networkMigrationExecutionID; }
  inline bool NetworkMigrationExecutionIDHasBeenSet() const { return m_networkMigrationExecutionIDHasBeenSet; }
  template <typename NetworkMigrationExecutionIDT = Aws::String>
  void SetNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    m_networkMigrationExecutionIDHasBeenSet = true;
    m_networkMigrationExecutionID = std::forward<NetworkMigrationExecutionIDT>(value);
  }
  template <typename NetworkMigrationExecutionIDT = Aws::String>
  StartNetworkMigrationCodeGenerationRequest& WithNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    SetNetworkMigrationExecutionID(std::forward<NetworkMigrationExecutionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the network migration definition.</p>
   */
  inline const Aws::String& GetNetworkMigrationDefinitionID() const { return m_networkMigrationDefinitionID; }
  inline bool NetworkMigrationDefinitionIDHasBeenSet() const { return m_networkMigrationDefinitionIDHasBeenSet; }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  void SetNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    m_networkMigrationDefinitionIDHasBeenSet = true;
    m_networkMigrationDefinitionID = std::forward<NetworkMigrationDefinitionIDT>(value);
  }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  StartNetworkMigrationCodeGenerationRequest& WithNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    SetNetworkMigrationDefinitionID(std::forward<NetworkMigrationDefinitionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output format types for code generation, such as CloudFormation or
   * Terraform.</p>
   */
  inline const Aws::Vector<CodeGenerationOutputFormatType>& GetCodeGenerationOutputFormatTypes() const {
    return m_codeGenerationOutputFormatTypes;
  }
  inline bool CodeGenerationOutputFormatTypesHasBeenSet() const { return m_codeGenerationOutputFormatTypesHasBeenSet; }
  template <typename CodeGenerationOutputFormatTypesT = Aws::Vector<CodeGenerationOutputFormatType>>
  void SetCodeGenerationOutputFormatTypes(CodeGenerationOutputFormatTypesT&& value) {
    m_codeGenerationOutputFormatTypesHasBeenSet = true;
    m_codeGenerationOutputFormatTypes = std::forward<CodeGenerationOutputFormatTypesT>(value);
  }
  template <typename CodeGenerationOutputFormatTypesT = Aws::Vector<CodeGenerationOutputFormatType>>
  StartNetworkMigrationCodeGenerationRequest& WithCodeGenerationOutputFormatTypes(CodeGenerationOutputFormatTypesT&& value) {
    SetCodeGenerationOutputFormatTypes(std::forward<CodeGenerationOutputFormatTypesT>(value));
    return *this;
  }
  inline StartNetworkMigrationCodeGenerationRequest& AddCodeGenerationOutputFormatTypes(CodeGenerationOutputFormatType value) {
    m_codeGenerationOutputFormatTypesHasBeenSet = true;
    m_codeGenerationOutputFormatTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkMigrationExecutionID;

  Aws::String m_networkMigrationDefinitionID;

  Aws::Vector<CodeGenerationOutputFormatType> m_codeGenerationOutputFormatTypes;
  bool m_networkMigrationExecutionIDHasBeenSet = false;
  bool m_networkMigrationDefinitionIDHasBeenSet = false;
  bool m_codeGenerationOutputFormatTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
