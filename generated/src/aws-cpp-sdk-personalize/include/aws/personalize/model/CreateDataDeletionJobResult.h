/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class CreateDataDeletionJobResult
  {
  public:
    AWS_PERSONALIZE_API CreateDataDeletionJobResult() = default;
    AWS_PERSONALIZE_API CreateDataDeletionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateDataDeletionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline const Aws::String& GetDataDeletionJobArn() const { return m_dataDeletionJobArn; }
    template<typename DataDeletionJobArnT = Aws::String>
    void SetDataDeletionJobArn(DataDeletionJobArnT&& value) { m_dataDeletionJobArnHasBeenSet = true; m_dataDeletionJobArn = std::forward<DataDeletionJobArnT>(value); }
    template<typename DataDeletionJobArnT = Aws::String>
    CreateDataDeletionJobResult& WithDataDeletionJobArn(DataDeletionJobArnT&& value) { SetDataDeletionJobArn(std::forward<DataDeletionJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDataDeletionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataDeletionJobArn;
    bool m_dataDeletionJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
