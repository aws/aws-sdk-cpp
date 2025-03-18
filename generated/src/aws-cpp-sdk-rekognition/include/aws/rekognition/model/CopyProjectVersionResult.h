﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{
  class CopyProjectVersionResult
  {
  public:
    AWS_REKOGNITION_API CopyProjectVersionResult() = default;
    AWS_REKOGNITION_API CopyProjectVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API CopyProjectVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the copied model version in the destination project. </p>
     */
    inline const Aws::String& GetProjectVersionArn() const { return m_projectVersionArn; }
    template<typename ProjectVersionArnT = Aws::String>
    void SetProjectVersionArn(ProjectVersionArnT&& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = std::forward<ProjectVersionArnT>(value); }
    template<typename ProjectVersionArnT = Aws::String>
    CopyProjectVersionResult& WithProjectVersionArn(ProjectVersionArnT&& value) { SetProjectVersionArn(std::forward<ProjectVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CopyProjectVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectVersionArn;
    bool m_projectVersionArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
