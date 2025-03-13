/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/MemberRelation.h>
#include <aws/qbusiness/model/AccessControl.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Used to configure access permissions for a document.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AccessConfiguration">AWS
   * API Reference</a></p>
   */
  class AccessConfiguration
  {
  public:
    AWS_QBUSINESS_API AccessConfiguration() = default;
    AWS_QBUSINESS_API AccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of <code>AccessControlList</code> objects.</p>
     */
    inline const Aws::Vector<AccessControl>& GetAccessControls() const { return m_accessControls; }
    inline bool AccessControlsHasBeenSet() const { return m_accessControlsHasBeenSet; }
    template<typename AccessControlsT = Aws::Vector<AccessControl>>
    void SetAccessControls(AccessControlsT&& value) { m_accessControlsHasBeenSet = true; m_accessControls = std::forward<AccessControlsT>(value); }
    template<typename AccessControlsT = Aws::Vector<AccessControl>>
    AccessConfiguration& WithAccessControls(AccessControlsT&& value) { SetAccessControls(std::forward<AccessControlsT>(value)); return *this;}
    template<typename AccessControlsT = AccessControl>
    AccessConfiguration& AddAccessControls(AccessControlsT&& value) { m_accessControlsHasBeenSet = true; m_accessControls.emplace_back(std::forward<AccessControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the member relation within the <code>AccessControlList</code>
     * object.</p>
     */
    inline MemberRelation GetMemberRelation() const { return m_memberRelation; }
    inline bool MemberRelationHasBeenSet() const { return m_memberRelationHasBeenSet; }
    inline void SetMemberRelation(MemberRelation value) { m_memberRelationHasBeenSet = true; m_memberRelation = value; }
    inline AccessConfiguration& WithMemberRelation(MemberRelation value) { SetMemberRelation(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccessControl> m_accessControls;
    bool m_accessControlsHasBeenSet = false;

    MemberRelation m_memberRelation{MemberRelation::NOT_SET};
    bool m_memberRelationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
