/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class ListEulasRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API ListEulasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEulas"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The list of EULA IDs that should be returned</p>
     */
    inline const Aws::Vector<Aws::String>& GetEulaIds() const{ return m_eulaIds; }
    inline bool EulaIdsHasBeenSet() const { return m_eulaIdsHasBeenSet; }
    inline void SetEulaIds(const Aws::Vector<Aws::String>& value) { m_eulaIdsHasBeenSet = true; m_eulaIds = value; }
    inline void SetEulaIds(Aws::Vector<Aws::String>&& value) { m_eulaIdsHasBeenSet = true; m_eulaIds = std::move(value); }
    inline ListEulasRequest& WithEulaIds(const Aws::Vector<Aws::String>& value) { SetEulaIds(value); return *this;}
    inline ListEulasRequest& WithEulaIds(Aws::Vector<Aws::String>&& value) { SetEulaIds(std::move(value)); return *this;}
    inline ListEulasRequest& AddEulaIds(const Aws::String& value) { m_eulaIdsHasBeenSet = true; m_eulaIds.push_back(value); return *this; }
    inline ListEulasRequest& AddEulaIds(Aws::String&& value) { m_eulaIdsHasBeenSet = true; m_eulaIds.push_back(std::move(value)); return *this; }
    inline ListEulasRequest& AddEulaIds(const char* value) { m_eulaIdsHasBeenSet = true; m_eulaIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListEulasRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEulasRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEulasRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_eulaIds;
    bool m_eulaIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
