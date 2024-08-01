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
    AWS_SSMQUICKSETUP_API ConfigurationDefinitionSummary();
    AWS_SSMQUICKSETUP_API ConfigurationDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API ConfigurationDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The common parameters and values for the configuration definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFirstClassParameters() const{ return m_firstClassParameters; }
    inline bool FirstClassParametersHasBeenSet() const { return m_firstClassParametersHasBeenSet; }
    inline void SetFirstClassParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters = value; }
    inline void SetFirstClassParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters = std::move(value); }
    inline ConfigurationDefinitionSummary& WithFirstClassParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetFirstClassParameters(value); return *this;}
    inline ConfigurationDefinitionSummary& WithFirstClassParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetFirstClassParameters(std::move(value)); return *this;}
    inline ConfigurationDefinitionSummary& AddFirstClassParameters(const Aws::String& key, const Aws::String& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(key, value); return *this; }
    inline ConfigurationDefinitionSummary& AddFirstClassParameters(Aws::String&& key, const Aws::String& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(std::move(key), value); return *this; }
    inline ConfigurationDefinitionSummary& AddFirstClassParameters(const Aws::String& key, Aws::String&& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(key, std::move(value)); return *this; }
    inline ConfigurationDefinitionSummary& AddFirstClassParameters(Aws::String&& key, Aws::String&& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline ConfigurationDefinitionSummary& AddFirstClassParameters(const char* key, Aws::String&& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(key, std::move(value)); return *this; }
    inline ConfigurationDefinitionSummary& AddFirstClassParameters(Aws::String&& key, const char* value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(std::move(key), value); return *this; }
    inline ConfigurationDefinitionSummary& AddFirstClassParameters(const char* key, const char* value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the configuration definition.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ConfigurationDefinitionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ConfigurationDefinitionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ConfigurationDefinitionSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Quick Setup configuration used by the configuration
     * definition.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ConfigurationDefinitionSummary& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ConfigurationDefinitionSummary& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ConfigurationDefinitionSummary& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Quick Setup type used by the configuration definition.</p>
     */
    inline const Aws::String& GetTypeVersion() const{ return m_typeVersion; }
    inline bool TypeVersionHasBeenSet() const { return m_typeVersionHasBeenSet; }
    inline void SetTypeVersion(const Aws::String& value) { m_typeVersionHasBeenSet = true; m_typeVersion = value; }
    inline void SetTypeVersion(Aws::String&& value) { m_typeVersionHasBeenSet = true; m_typeVersion = std::move(value); }
    inline void SetTypeVersion(const char* value) { m_typeVersionHasBeenSet = true; m_typeVersion.assign(value); }
    inline ConfigurationDefinitionSummary& WithTypeVersion(const Aws::String& value) { SetTypeVersion(value); return *this;}
    inline ConfigurationDefinitionSummary& WithTypeVersion(Aws::String&& value) { SetTypeVersion(std::move(value)); return *this;}
    inline ConfigurationDefinitionSummary& WithTypeVersion(const char* value) { SetTypeVersion(value); return *this;}
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
