/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
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
namespace MarketplaceDeployment
{
namespace Model
{

  /**
   * <p>The shape containing the requested deployment parameter name and
   * secretString.</p>  <p>To support AWS CloudFormation dynamic references to
   * this resource using Quick Launch, this value must match a parameter defined in
   * the CloudFormation templated provided to buyers.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/DeploymentParameterInput">AWS
   * API Reference</a></p>
   */
  class DeploymentParameterInput
  {
  public:
    AWS_MARKETPLACEDEPLOYMENT_API DeploymentParameterInput() = default;
    AWS_MARKETPLACEDEPLOYMENT_API DeploymentParameterInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEDEPLOYMENT_API DeploymentParameterInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEDEPLOYMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The desired name of the deployment parameter. This is the identifier on which
     * deployment parameters are keyed for a given buyer and product. If this name
     * matches an existing deployment parameter, this request will update the existing
     * resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeploymentParameterInput& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text to encrypt and store in the secret.</p>
     */
    inline const Aws::String& GetSecretString() const { return m_secretString; }
    inline bool SecretStringHasBeenSet() const { return m_secretStringHasBeenSet; }
    template<typename SecretStringT = Aws::String>
    void SetSecretString(SecretStringT&& value) { m_secretStringHasBeenSet = true; m_secretString = std::forward<SecretStringT>(value); }
    template<typename SecretStringT = Aws::String>
    DeploymentParameterInput& WithSecretString(SecretStringT&& value) { SetSecretString(std::forward<SecretStringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_secretString;
    bool m_secretStringHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceDeployment
} // namespace Aws
