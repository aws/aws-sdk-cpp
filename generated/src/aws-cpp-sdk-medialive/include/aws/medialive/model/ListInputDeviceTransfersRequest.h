/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for ListInputDeviceTransfersRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDeviceTransfersRequest">AWS
   * API Reference</a></p>
   */
  class ListInputDeviceTransfersRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API ListInputDeviceTransfersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInputDeviceTransfers"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

    AWS_MEDIALIVE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListInputDeviceTransfersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListInputDeviceTransfersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListInputDeviceTransfersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListInputDeviceTransfersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetTransferType() const{ return m_transferType; }

    
    inline bool TransferTypeHasBeenSet() const { return m_transferTypeHasBeenSet; }

    
    inline void SetTransferType(const Aws::String& value) { m_transferTypeHasBeenSet = true; m_transferType = value; }

    
    inline void SetTransferType(Aws::String&& value) { m_transferTypeHasBeenSet = true; m_transferType = std::move(value); }

    
    inline void SetTransferType(const char* value) { m_transferTypeHasBeenSet = true; m_transferType.assign(value); }

    
    inline ListInputDeviceTransfersRequest& WithTransferType(const Aws::String& value) { SetTransferType(value); return *this;}

    
    inline ListInputDeviceTransfersRequest& WithTransferType(Aws::String&& value) { SetTransferType(std::move(value)); return *this;}

    
    inline ListInputDeviceTransfersRequest& WithTransferType(const char* value) { SetTransferType(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_transferType;
    bool m_transferTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
