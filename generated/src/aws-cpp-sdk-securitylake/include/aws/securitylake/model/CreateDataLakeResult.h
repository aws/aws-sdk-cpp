/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/DataLakeResource.h>
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
namespace SecurityLake
{
namespace Model
{
  class CreateDataLakeResult
  {
  public:
    AWS_SECURITYLAKE_API CreateDataLakeResult() = default;
    AWS_SECURITYLAKE_API CreateDataLakeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API CreateDataLakeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The created Security Lake configuration object.</p>
     */
    inline const Aws::Vector<DataLakeResource>& GetDataLakes() const { return m_dataLakes; }
    template<typename DataLakesT = Aws::Vector<DataLakeResource>>
    void SetDataLakes(DataLakesT&& value) { m_dataLakesHasBeenSet = true; m_dataLakes = std::forward<DataLakesT>(value); }
    template<typename DataLakesT = Aws::Vector<DataLakeResource>>
    CreateDataLakeResult& WithDataLakes(DataLakesT&& value) { SetDataLakes(std::forward<DataLakesT>(value)); return *this;}
    template<typename DataLakesT = DataLakeResource>
    CreateDataLakeResult& AddDataLakes(DataLakesT&& value) { m_dataLakesHasBeenSet = true; m_dataLakes.emplace_back(std::forward<DataLakesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDataLakeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataLakeResource> m_dataLakes;
    bool m_dataLakesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
