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
    AWS_MGN_API SsmDocument() = default;
    AWS_MGN_API SsmDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API SsmDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>User-friendly name for the AWS Systems Manager Document.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    SsmDocument& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document external parameters.</p>
     */
    inline const Aws::Map<Aws::String, SsmExternalParameter>& GetExternalParameters() const { return m_externalParameters; }
    inline bool ExternalParametersHasBeenSet() const { return m_externalParametersHasBeenSet; }
    template<typename ExternalParametersT = Aws::Map<Aws::String, SsmExternalParameter>>
    void SetExternalParameters(ExternalParametersT&& value) { m_externalParametersHasBeenSet = true; m_externalParameters = std::forward<ExternalParametersT>(value); }
    template<typename ExternalParametersT = Aws::Map<Aws::String, SsmExternalParameter>>
    SsmDocument& WithExternalParameters(ExternalParametersT&& value) { SetExternalParameters(std::forward<ExternalParametersT>(value)); return *this;}
    template<typename ExternalParametersKeyT = Aws::String, typename ExternalParametersValueT = SsmExternalParameter>
    SsmDocument& AddExternalParameters(ExternalParametersKeyT&& key, ExternalParametersValueT&& value) {
      m_externalParametersHasBeenSet = true; m_externalParameters.emplace(std::forward<ExternalParametersKeyT>(key), std::forward<ExternalParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>If true, Cutover will not be enabled if the document has failed.</p>
     */
    inline bool GetMustSucceedForCutover() const { return m_mustSucceedForCutover; }
    inline bool MustSucceedForCutoverHasBeenSet() const { return m_mustSucceedForCutoverHasBeenSet; }
    inline void SetMustSucceedForCutover(bool value) { m_mustSucceedForCutoverHasBeenSet = true; m_mustSucceedForCutover = value; }
    inline SsmDocument& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>>
    SsmDocument& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<SsmParameterStoreParameter>>
    SsmDocument& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document name or full ARN.</p>
     */
    inline const Aws::String& GetSsmDocumentName() const { return m_ssmDocumentName; }
    inline bool SsmDocumentNameHasBeenSet() const { return m_ssmDocumentNameHasBeenSet; }
    template<typename SsmDocumentNameT = Aws::String>
    void SetSsmDocumentName(SsmDocumentNameT&& value) { m_ssmDocumentNameHasBeenSet = true; m_ssmDocumentName = std::forward<SsmDocumentNameT>(value); }
    template<typename SsmDocumentNameT = Aws::String>
    SsmDocument& WithSsmDocumentName(SsmDocumentNameT&& value) { SetSsmDocumentName(std::forward<SsmDocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document timeout seconds.</p>
     */
    inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline SsmDocument& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::Map<Aws::String, SsmExternalParameter> m_externalParameters;
    bool m_externalParametersHasBeenSet = false;

    bool m_mustSucceedForCutover{false};
    bool m_mustSucceedForCutoverHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_ssmDocumentName;
    bool m_ssmDocumentNameHasBeenSet = false;

    int m_timeoutSeconds{0};
    bool m_timeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
