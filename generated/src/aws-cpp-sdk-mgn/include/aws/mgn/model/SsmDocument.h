/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/SsmExternalParameter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/SsmParameterStoreParameter.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>AWS Systems Manager Document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SsmDocument">AWS API
   * Reference</a></p>
   */
  class SsmDocument
  {
  public:
    AWS_MGN_API SsmDocument();
    AWS_MGN_API SsmDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API SsmDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>User-friendly name for the AWS Systems Manager Document.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }
    inline SsmDocument& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}
    inline SsmDocument& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}
    inline SsmDocument& WithActionName(const char* value) { SetActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document external parameters.</p>
     */
    inline const Aws::Map<Aws::String, SsmExternalParameter>& GetExternalParameters() const{ return m_externalParameters; }
    inline bool ExternalParametersHasBeenSet() const { return m_externalParametersHasBeenSet; }
    inline void SetExternalParameters(const Aws::Map<Aws::String, SsmExternalParameter>& value) { m_externalParametersHasBeenSet = true; m_externalParameters = value; }
    inline void SetExternalParameters(Aws::Map<Aws::String, SsmExternalParameter>&& value) { m_externalParametersHasBeenSet = true; m_externalParameters = std::move(value); }
    inline SsmDocument& WithExternalParameters(const Aws::Map<Aws::String, SsmExternalParameter>& value) { SetExternalParameters(value); return *this;}
    inline SsmDocument& WithExternalParameters(Aws::Map<Aws::String, SsmExternalParameter>&& value) { SetExternalParameters(std::move(value)); return *this;}
    inline SsmDocument& AddExternalParameters(const Aws::String& key, const SsmExternalParameter& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, value); return *this; }
    inline SsmDocument& AddExternalParameters(Aws::String&& key, const SsmExternalParameter& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(std::move(key), value); return *this; }
    inline SsmDocument& AddExternalParameters(const Aws::String& key, SsmExternalParameter&& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, std::move(value)); return *this; }
    inline SsmDocument& AddExternalParameters(Aws::String&& key, SsmExternalParameter&& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SsmDocument& AddExternalParameters(const char* key, SsmExternalParameter&& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, std::move(value)); return *this; }
    inline SsmDocument& AddExternalParameters(const char* key, const SsmExternalParameter& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If true, Cutover will not be enabled if the document has failed.</p>
     */
    inline bool GetMustSucceedForCutover() const{ return m_mustSucceedForCutover; }
    inline bool MustSucceedForCutoverHasBeenSet() const { return m_mustSucceedForCutoverHasBeenSet; }
    inline void SetMustSucceedForCutover(bool value) { m_mustSucceedForCutoverHasBeenSet = true; m_mustSucceedForCutover = value; }
    inline SsmDocument& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline SsmDocument& WithParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { SetParameters(value); return *this;}
    inline SsmDocument& WithParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { SetParameters(std::move(value)); return *this;}
    inline SsmDocument& AddParameters(const Aws::String& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline SsmDocument& AddParameters(Aws::String&& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline SsmDocument& AddParameters(const Aws::String& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline SsmDocument& AddParameters(Aws::String&& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SsmDocument& AddParameters(const char* key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline SsmDocument& AddParameters(const char* key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document name or full ARN.</p>
     */
    inline const Aws::String& GetSsmDocumentName() const{ return m_ssmDocumentName; }
    inline bool SsmDocumentNameHasBeenSet() const { return m_ssmDocumentNameHasBeenSet; }
    inline void SetSsmDocumentName(const Aws::String& value) { m_ssmDocumentNameHasBeenSet = true; m_ssmDocumentName = value; }
    inline void SetSsmDocumentName(Aws::String&& value) { m_ssmDocumentNameHasBeenSet = true; m_ssmDocumentName = std::move(value); }
    inline void SetSsmDocumentName(const char* value) { m_ssmDocumentNameHasBeenSet = true; m_ssmDocumentName.assign(value); }
    inline SsmDocument& WithSsmDocumentName(const Aws::String& value) { SetSsmDocumentName(value); return *this;}
    inline SsmDocument& WithSsmDocumentName(Aws::String&& value) { SetSsmDocumentName(std::move(value)); return *this;}
    inline SsmDocument& WithSsmDocumentName(const char* value) { SetSsmDocumentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document timeout seconds.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline SsmDocument& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::Map<Aws::String, SsmExternalParameter> m_externalParameters;
    bool m_externalParametersHasBeenSet = false;

    bool m_mustSucceedForCutover;
    bool m_mustSucceedForCutoverHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_ssmDocumentName;
    bool m_ssmDocumentNameHasBeenSet = false;

    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
