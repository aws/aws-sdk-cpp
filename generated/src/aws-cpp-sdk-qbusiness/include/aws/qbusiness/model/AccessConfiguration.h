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
    AWS_QBUSINESS_API AccessConfiguration();
    AWS_QBUSINESS_API AccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of <code>AccessControlList</code> objects.</p>
     */
    inline const Aws::Vector<AccessControl>& GetAccessControls() const{ return m_accessControls; }

    /**
     * <p>A list of <code>AccessControlList</code> objects.</p>
     */
    inline bool AccessControlsHasBeenSet() const { return m_accessControlsHasBeenSet; }

    /**
     * <p>A list of <code>AccessControlList</code> objects.</p>
     */
    inline void SetAccessControls(const Aws::Vector<AccessControl>& value) { m_accessControlsHasBeenSet = true; m_accessControls = value; }

    /**
     * <p>A list of <code>AccessControlList</code> objects.</p>
     */
    inline void SetAccessControls(Aws::Vector<AccessControl>&& value) { m_accessControlsHasBeenSet = true; m_accessControls = std::move(value); }

    /**
     * <p>A list of <code>AccessControlList</code> objects.</p>
     */
    inline AccessConfiguration& WithAccessControls(const Aws::Vector<AccessControl>& value) { SetAccessControls(value); return *this;}

    /**
     * <p>A list of <code>AccessControlList</code> objects.</p>
     */
    inline AccessConfiguration& WithAccessControls(Aws::Vector<AccessControl>&& value) { SetAccessControls(std::move(value)); return *this;}

    /**
     * <p>A list of <code>AccessControlList</code> objects.</p>
     */
    inline AccessConfiguration& AddAccessControls(const AccessControl& value) { m_accessControlsHasBeenSet = true; m_accessControls.push_back(value); return *this; }

    /**
     * <p>A list of <code>AccessControlList</code> objects.</p>
     */
    inline AccessConfiguration& AddAccessControls(AccessControl&& value) { m_accessControlsHasBeenSet = true; m_accessControls.push_back(std::move(value)); return *this; }


    /**
     * <p>Describes the member relation within the <code>AccessControlList</code>
     * object.</p>
     */
    inline const MemberRelation& GetMemberRelation() const{ return m_memberRelation; }

    /**
     * <p>Describes the member relation within the <code>AccessControlList</code>
     * object.</p>
     */
    inline bool MemberRelationHasBeenSet() const { return m_memberRelationHasBeenSet; }

    /**
     * <p>Describes the member relation within the <code>AccessControlList</code>
     * object.</p>
     */
    inline void SetMemberRelation(const MemberRelation& value) { m_memberRelationHasBeenSet = true; m_memberRelation = value; }

    /**
     * <p>Describes the member relation within the <code>AccessControlList</code>
     * object.</p>
     */
    inline void SetMemberRelation(MemberRelation&& value) { m_memberRelationHasBeenSet = true; m_memberRelation = std::move(value); }

    /**
     * <p>Describes the member relation within the <code>AccessControlList</code>
     * object.</p>
     */
    inline AccessConfiguration& WithMemberRelation(const MemberRelation& value) { SetMemberRelation(value); return *this;}

    /**
     * <p>Describes the member relation within the <code>AccessControlList</code>
     * object.</p>
     */
    inline AccessConfiguration& WithMemberRelation(MemberRelation&& value) { SetMemberRelation(std::move(value)); return *this;}

  private:

    Aws::Vector<AccessControl> m_accessControls;
    bool m_accessControlsHasBeenSet = false;

    MemberRelation m_memberRelation;
    bool m_memberRelationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
