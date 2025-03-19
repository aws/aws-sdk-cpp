/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SSMQuickSetup
{
namespace Model
{

  /**
   * <p>A summarized definition of a Quick Setup configuration
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/ConfigurationDefinitionSummary">AWS
   * API Reference</a></p>
   */
  class ConfigurationDefinitionSummary
  {
  public:
    AWS_SSMQUICKSETUP_API ConfigurationDefinitionSummary() = default;
    AWS_SSMQUICKSETUP_API ConfigurationDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API ConfigurationDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The common parameters and values for the configuration definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFirstClassParameters() const { return m_firstClassParameters; }
    inline bool FirstClassParametersHasBeenSet() const { return m_firstClassParametersHasBeenSet; }
    template<typename FirstClassParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetFirstClassParameters(FirstClassParametersT&& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters = std::forward<FirstClassParametersT>(value); }
    template<typename FirstClassParametersT = Aws::Map<Aws::String, Aws::String>>
    ConfigurationDefinitionSummary& WithFirstClassParameters(FirstClassParametersT&& value) { SetFirstClassParameters(std::forward<FirstClassParametersT>(value)); return *this;}
    template<typename FirstClassParametersKeyT = Aws::String, typename FirstClassParametersValueT = Aws::String>
    ConfigurationDefinitionSummary& AddFirstClassParameters(FirstClassParametersKeyT&& key, FirstClassParametersValueT&& value) {
      m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(std::forward<FirstClassParametersKeyT>(key), std::forward<FirstClassParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the configuration definition.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConfigurationDefinitionSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Quick Setup configuration used by the configuration
     * definition.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ConfigurationDefinitionSummary& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Quick Setup type used by the configuration definition.</p>
     */
    inline const Aws::String& GetTypeVersion() const { return m_typeVersion; }
    inline bool TypeVersionHasBeenSet() const { return m_typeVersionHasBeenSet; }
    template<typename TypeVersionT = Aws::String>
    void SetTypeVersion(TypeVersionT&& value) { m_typeVersionHasBeenSet = true; m_typeVersion = std::forward<TypeVersionT>(value); }
    template<typename TypeVersionT = Aws::String>
    ConfigurationDefinitionSummary& WithTypeVersion(TypeVersionT&& value) { SetTypeVersion(std::forward<TypeVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_firstClassParameters;
    bool m_firstClassParametersHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeVersion;
    bool m_typeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
