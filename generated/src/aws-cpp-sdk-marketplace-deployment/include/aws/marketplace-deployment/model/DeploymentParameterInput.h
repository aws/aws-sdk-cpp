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
   * secretString.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/DeploymentParameterInput">AWS
   * API Reference</a></p>
   */
  class DeploymentParameterInput
  {
  public:
    AWS_MARKETPLACEDEPLOYMENT_API DeploymentParameterInput();
    AWS_MARKETPLACEDEPLOYMENT_API DeploymentParameterInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEDEPLOYMENT_API DeploymentParameterInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEDEPLOYMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The desired name of the deployment parameter. This is the identifier on which
     * deployment parameters are keyed for a given buyer and product. If this name
     * matches an existing deployment parameter, this request will update the existing
     * resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The desired name of the deployment parameter. This is the identifier on which
     * deployment parameters are keyed for a given buyer and product. If this name
     * matches an existing deployment parameter, this request will update the existing
     * resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The desired name of the deployment parameter. This is the identifier on which
     * deployment parameters are keyed for a given buyer and product. If this name
     * matches an existing deployment parameter, this request will update the existing
     * resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The desired name of the deployment parameter. This is the identifier on which
     * deployment parameters are keyed for a given buyer and product. If this name
     * matches an existing deployment parameter, this request will update the existing
     * resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The desired name of the deployment parameter. This is the identifier on which
     * deployment parameters are keyed for a given buyer and product. If this name
     * matches an existing deployment parameter, this request will update the existing
     * resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The desired name of the deployment parameter. This is the identifier on which
     * deployment parameters are keyed for a given buyer and product. If this name
     * matches an existing deployment parameter, this request will update the existing
     * resource.</p>
     */
    inline DeploymentParameterInput& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The desired name of the deployment parameter. This is the identifier on which
     * deployment parameters are keyed for a given buyer and product. If this name
     * matches an existing deployment parameter, this request will update the existing
     * resource.</p>
     */
    inline DeploymentParameterInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The desired name of the deployment parameter. This is the identifier on which
     * deployment parameters are keyed for a given buyer and product. If this name
     * matches an existing deployment parameter, this request will update the existing
     * resource.</p>
     */
    inline DeploymentParameterInput& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The text to encrypt and store in the secret.</p>
     */
    inline const Aws::String& GetSecretString() const{ return m_secretString; }

    /**
     * <p>The text to encrypt and store in the secret.</p>
     */
    inline bool SecretStringHasBeenSet() const { return m_secretStringHasBeenSet; }

    /**
     * <p>The text to encrypt and store in the secret.</p>
     */
    inline void SetSecretString(const Aws::String& value) { m_secretStringHasBeenSet = true; m_secretString = value; }

    /**
     * <p>The text to encrypt and store in the secret.</p>
     */
    inline void SetSecretString(Aws::String&& value) { m_secretStringHasBeenSet = true; m_secretString = std::move(value); }

    /**
     * <p>The text to encrypt and store in the secret.</p>
     */
    inline void SetSecretString(const char* value) { m_secretStringHasBeenSet = true; m_secretString.assign(value); }

    /**
     * <p>The text to encrypt and store in the secret.</p>
     */
    inline DeploymentParameterInput& WithSecretString(const Aws::String& value) { SetSecretString(value); return *this;}

    /**
     * <p>The text to encrypt and store in the secret.</p>
     */
    inline DeploymentParameterInput& WithSecretString(Aws::String&& value) { SetSecretString(std::move(value)); return *this;}

    /**
     * <p>The text to encrypt and store in the secret.</p>
     */
    inline DeploymentParameterInput& WithSecretString(const char* value) { SetSecretString(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_secretString;
    bool m_secretStringHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceDeployment
} // namespace Aws
