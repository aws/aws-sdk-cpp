/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ListAccessGrantsLocationsEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class ListAccessGrantsLocationsResult
  {
  public:
    AWS_S3CONTROL_API ListAccessGrantsLocationsResult() = default;
    AWS_S3CONTROL_API ListAccessGrantsLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListAccessGrantsLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Locations</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccessGrantsLocationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for a list of registered locations in an S3 Access Grants
     * instance.</p>
     */
    inline const Aws::Vector<ListAccessGrantsLocationsEntry>& GetAccessGrantsLocationsList() const { return m_accessGrantsLocationsList; }
    template<typename AccessGrantsLocationsListT = Aws::Vector<ListAccessGrantsLocationsEntry>>
    void SetAccessGrantsLocationsList(AccessGrantsLocationsListT&& value) { m_accessGrantsLocationsListHasBeenSet = true; m_accessGrantsLocationsList = std::forward<AccessGrantsLocationsListT>(value); }
    template<typename AccessGrantsLocationsListT = Aws::Vector<ListAccessGrantsLocationsEntry>>
    ListAccessGrantsLocationsResult& WithAccessGrantsLocationsList(AccessGrantsLocationsListT&& value) { SetAccessGrantsLocationsList(std::forward<AccessGrantsLocationsListT>(value)); return *this;}
    template<typename AccessGrantsLocationsListT = ListAccessGrantsLocationsEntry>
    ListAccessGrantsLocationsResult& AddAccessGrantsLocationsList(AccessGrantsLocationsListT&& value) { m_accessGrantsLocationsListHasBeenSet = true; m_accessGrantsLocationsList.emplace_back(std::forward<AccessGrantsLocationsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccessGrantsLocationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    ListAccessGrantsLocationsResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListAccessGrantsLocationsEntry> m_accessGrantsLocationsList;
    bool m_accessGrantsLocationsListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
