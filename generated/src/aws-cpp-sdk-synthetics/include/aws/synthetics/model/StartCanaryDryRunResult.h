/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/DryRunConfigOutput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Synthetics
{
namespace Model
{
  class StartCanaryDryRunResult
  {
  public:
    AWS_SYNTHETICS_API StartCanaryDryRunResult() = default;
    AWS_SYNTHETICS_API StartCanaryDryRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API StartCanaryDryRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the dry run configurations for a canary.</p>
     */
    inline const DryRunConfigOutput& GetDryRunConfig() const { return m_dryRunConfig; }
    template<typename DryRunConfigT = DryRunConfigOutput>
    void SetDryRunConfig(DryRunConfigT&& value) { m_dryRunConfigHasBeenSet = true; m_dryRunConfig = std::forward<DryRunConfigT>(value); }
    template<typename DryRunConfigT = DryRunConfigOutput>
    StartCanaryDryRunResult& WithDryRunConfig(DryRunConfigT&& value) { SetDryRunConfig(std::forward<DryRunConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartCanaryDryRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DryRunConfigOutput m_dryRunConfig;
    bool m_dryRunConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
