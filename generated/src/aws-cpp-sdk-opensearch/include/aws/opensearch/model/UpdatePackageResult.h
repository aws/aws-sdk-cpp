/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/PackageDetails.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for the response returned by the <code>UpdatePackage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdatePackageResponse">AWS
   * API Reference</a></p>
   */
  class UpdatePackageResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdatePackageResult() = default;
    AWS_OPENSEARCHSERVICE_API UpdatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpdatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a package.</p>
     */
    inline const PackageDetails& GetPackageDetails() const { return m_packageDetails; }
    template<typename PackageDetailsT = PackageDetails>
    void SetPackageDetails(PackageDetailsT&& value) { m_packageDetailsHasBeenSet = true; m_packageDetails = std::forward<PackageDetailsT>(value); }
    template<typename PackageDetailsT = PackageDetails>
    UpdatePackageResult& WithPackageDetails(PackageDetailsT&& value) { SetPackageDetails(std::forward<PackageDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdatePackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PackageDetails m_packageDetails;
    bool m_packageDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
