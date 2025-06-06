﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/EnvironmentTemplateVersion.h>
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
namespace Proton
{
namespace Model
{
  class UpdateEnvironmentTemplateVersionResult
  {
  public:
    AWS_PROTON_API UpdateEnvironmentTemplateVersionResult() = default;
    AWS_PROTON_API UpdateEnvironmentTemplateVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API UpdateEnvironmentTemplateVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The environment template version detail data that's returned by Proton.</p>
     */
    inline const EnvironmentTemplateVersion& GetEnvironmentTemplateVersion() const { return m_environmentTemplateVersion; }
    template<typename EnvironmentTemplateVersionT = EnvironmentTemplateVersion>
    void SetEnvironmentTemplateVersion(EnvironmentTemplateVersionT&& value) { m_environmentTemplateVersionHasBeenSet = true; m_environmentTemplateVersion = std::forward<EnvironmentTemplateVersionT>(value); }
    template<typename EnvironmentTemplateVersionT = EnvironmentTemplateVersion>
    UpdateEnvironmentTemplateVersionResult& WithEnvironmentTemplateVersion(EnvironmentTemplateVersionT&& value) { SetEnvironmentTemplateVersion(std::forward<EnvironmentTemplateVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateEnvironmentTemplateVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EnvironmentTemplateVersion m_environmentTemplateVersion;
    bool m_environmentTemplateVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
