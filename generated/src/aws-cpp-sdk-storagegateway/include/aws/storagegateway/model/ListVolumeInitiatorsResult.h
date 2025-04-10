﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>ListVolumeInitiatorsOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListVolumeInitiatorsOutput">AWS
   * API Reference</a></p>
   */
  class ListVolumeInitiatorsResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListVolumeInitiatorsResult() = default;
    AWS_STORAGEGATEWAY_API ListVolumeInitiatorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListVolumeInitiatorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The host names and port numbers of all iSCSI initiators that are connected to
     * the gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInitiators() const { return m_initiators; }
    template<typename InitiatorsT = Aws::Vector<Aws::String>>
    void SetInitiators(InitiatorsT&& value) { m_initiatorsHasBeenSet = true; m_initiators = std::forward<InitiatorsT>(value); }
    template<typename InitiatorsT = Aws::Vector<Aws::String>>
    ListVolumeInitiatorsResult& WithInitiators(InitiatorsT&& value) { SetInitiators(std::forward<InitiatorsT>(value)); return *this;}
    template<typename InitiatorsT = Aws::String>
    ListVolumeInitiatorsResult& AddInitiators(InitiatorsT&& value) { m_initiatorsHasBeenSet = true; m_initiators.emplace_back(std::forward<InitiatorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVolumeInitiatorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_initiators;
    bool m_initiatorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
