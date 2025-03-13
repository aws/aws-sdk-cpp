/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
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
namespace MarketplaceCatalog
{
namespace Model
{
  class StartChangeSetResult
  {
  public:
    AWS_MARKETPLACECATALOG_API StartChangeSetResult() = default;
    AWS_MARKETPLACECATALOG_API StartChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API StartChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Unique identifier generated for the request.</p>
     */
    inline const Aws::String& GetChangeSetId() const { return m_changeSetId; }
    template<typename ChangeSetIdT = Aws::String>
    void SetChangeSetId(ChangeSetIdT&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::forward<ChangeSetIdT>(value); }
    template<typename ChangeSetIdT = Aws::String>
    StartChangeSetResult& WithChangeSetId(ChangeSetIdT&& value) { SetChangeSetId(std::forward<ChangeSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN associated to the unique identifier generated for the request.</p>
     */
    inline const Aws::String& GetChangeSetArn() const { return m_changeSetArn; }
    template<typename ChangeSetArnT = Aws::String>
    void SetChangeSetArn(ChangeSetArnT&& value) { m_changeSetArnHasBeenSet = true; m_changeSetArn = std::forward<ChangeSetArnT>(value); }
    template<typename ChangeSetArnT = Aws::String>
    StartChangeSetResult& WithChangeSetArn(ChangeSetArnT&& value) { SetChangeSetArn(std::forward<ChangeSetArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartChangeSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_changeSetId;
    bool m_changeSetIdHasBeenSet = false;

    Aws::String m_changeSetArn;
    bool m_changeSetArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
