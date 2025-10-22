/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/NoBidAction.h>
#include <aws/rtbfabric/model/HeaderTagAction.h>
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
namespace RTBFabric
{
namespace Model
{

  /**
   * <p>Describes a bid action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/Action">AWS
   * API Reference</a></p>
   */
  class Action
  {
  public:
    AWS_RTBFABRIC_API Action() = default;
    AWS_RTBFABRIC_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes a no bid action.</p>
     */
    inline const NoBidAction& GetNoBid() const { return m_noBid; }
    inline bool NoBidHasBeenSet() const { return m_noBidHasBeenSet; }
    template<typename NoBidT = NoBidAction>
    void SetNoBid(NoBidT&& value) { m_noBidHasBeenSet = true; m_noBid = std::forward<NoBidT>(value); }
    template<typename NoBidT = NoBidAction>
    Action& WithNoBid(NoBidT&& value) { SetNoBid(std::forward<NoBidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the header tag for a bid action.</p>
     */
    inline const HeaderTagAction& GetHeaderTag() const { return m_headerTag; }
    inline bool HeaderTagHasBeenSet() const { return m_headerTagHasBeenSet; }
    template<typename HeaderTagT = HeaderTagAction>
    void SetHeaderTag(HeaderTagT&& value) { m_headerTagHasBeenSet = true; m_headerTag = std::forward<HeaderTagT>(value); }
    template<typename HeaderTagT = HeaderTagAction>
    Action& WithHeaderTag(HeaderTagT&& value) { SetHeaderTag(std::forward<HeaderTagT>(value)); return *this;}
    ///@}
  private:

    NoBidAction m_noBid;
    bool m_noBidHasBeenSet = false;

    HeaderTagAction m_headerTag;
    bool m_headerTagHasBeenSet = false;
  };

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
