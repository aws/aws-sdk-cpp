/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/JourneyRunResponse.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information from all runs of a journey.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyRunsResponse">AWS
   * API Reference</a></p>
   */
  class JourneyRunsResponse
  {
  public:
    AWS_PINPOINT_API JourneyRunsResponse();
    AWS_PINPOINT_API JourneyRunsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyRunsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of responses, one for each run of the journey</p>
     */
    inline const Aws::Vector<JourneyRunResponse>& GetItem() const{ return m_item; }
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
    inline void SetItem(const Aws::Vector<JourneyRunResponse>& value) { m_itemHasBeenSet = true; m_item = value; }
    inline void SetItem(Aws::Vector<JourneyRunResponse>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }
    inline JourneyRunsResponse& WithItem(const Aws::Vector<JourneyRunResponse>& value) { SetItem(value); return *this;}
    inline JourneyRunsResponse& WithItem(Aws::Vector<JourneyRunResponse>&& value) { SetItem(std::move(value)); return *this;}
    inline JourneyRunsResponse& AddItem(const JourneyRunResponse& value) { m_itemHasBeenSet = true; m_item.push_back(value); return *this; }
    inline JourneyRunsResponse& AddItem(JourneyRunResponse&& value) { m_itemHasBeenSet = true; m_item.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline JourneyRunsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline JourneyRunsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline JourneyRunsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<JourneyRunResponse> m_item;
    bool m_itemHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
