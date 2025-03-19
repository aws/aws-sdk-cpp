/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Displays a list of the destination segments. Used only when the service
   * insertion action is <code>send-to</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/WhenSentTo">AWS
   * API Reference</a></p>
   */
  class WhenSentTo
  {
  public:
    AWS_NETWORKMANAGER_API WhenSentTo() = default;
    AWS_NETWORKMANAGER_API WhenSentTo(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API WhenSentTo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of destination segments when the service insertion action is
     * <code>send-to</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWhenSentToSegmentsList() const { return m_whenSentToSegmentsList; }
    inline bool WhenSentToSegmentsListHasBeenSet() const { return m_whenSentToSegmentsListHasBeenSet; }
    template<typename WhenSentToSegmentsListT = Aws::Vector<Aws::String>>
    void SetWhenSentToSegmentsList(WhenSentToSegmentsListT&& value) { m_whenSentToSegmentsListHasBeenSet = true; m_whenSentToSegmentsList = std::forward<WhenSentToSegmentsListT>(value); }
    template<typename WhenSentToSegmentsListT = Aws::Vector<Aws::String>>
    WhenSentTo& WithWhenSentToSegmentsList(WhenSentToSegmentsListT&& value) { SetWhenSentToSegmentsList(std::forward<WhenSentToSegmentsListT>(value)); return *this;}
    template<typename WhenSentToSegmentsListT = Aws::String>
    WhenSentTo& AddWhenSentToSegmentsList(WhenSentToSegmentsListT&& value) { m_whenSentToSegmentsListHasBeenSet = true; m_whenSentToSegmentsList.emplace_back(std::forward<WhenSentToSegmentsListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_whenSentToSegmentsList;
    bool m_whenSentToSegmentsListHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
