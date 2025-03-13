/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/Communication.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>The five most recent communications associated with the case.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/RecentCaseCommunications">AWS
   * API Reference</a></p>
   */
  class RecentCaseCommunications
  {
  public:
    AWS_SUPPORT_API RecentCaseCommunications() = default;
    AWS_SUPPORT_API RecentCaseCommunications(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API RecentCaseCommunications& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The five most recent communications associated with the case.</p>
     */
    inline const Aws::Vector<Communication>& GetCommunications() const { return m_communications; }
    inline bool CommunicationsHasBeenSet() const { return m_communicationsHasBeenSet; }
    template<typename CommunicationsT = Aws::Vector<Communication>>
    void SetCommunications(CommunicationsT&& value) { m_communicationsHasBeenSet = true; m_communications = std::forward<CommunicationsT>(value); }
    template<typename CommunicationsT = Aws::Vector<Communication>>
    RecentCaseCommunications& WithCommunications(CommunicationsT&& value) { SetCommunications(std::forward<CommunicationsT>(value)); return *this;}
    template<typename CommunicationsT = Communication>
    RecentCaseCommunications& AddCommunications(CommunicationsT&& value) { m_communicationsHasBeenSet = true; m_communications.emplace_back(std::forward<CommunicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A resumption point for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    RecentCaseCommunications& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Communication> m_communications;
    bool m_communicationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
