/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/PolicyType.h>
#include <aws/organizations/model/PolicyTypeStatus.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains information about a policy type and its status in the associated
   * root.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/PolicyTypeSummary">AWS
   * API Reference</a></p>
   */
  class PolicyTypeSummary
  {
  public:
    AWS_ORGANIZATIONS_API PolicyTypeSummary();
    AWS_ORGANIZATIONS_API PolicyTypeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API PolicyTypeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the policy type.</p>
     */
    inline const PolicyType& GetType() const{ return m_type; }

    /**
     * <p>The name of the policy type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The name of the policy type.</p>
     */
    inline void SetType(const PolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The name of the policy type.</p>
     */
    inline void SetType(PolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The name of the policy type.</p>
     */
    inline PolicyTypeSummary& WithType(const PolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The name of the policy type.</p>
     */
    inline PolicyTypeSummary& WithType(PolicyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The status of the policy type as it relates to the associated root. To attach
     * a policy of the specified type to a root or to an OU or account in that root, it
     * must be available in the organization and enabled for that root.</p>
     */
    inline const PolicyTypeStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the policy type as it relates to the associated root. To attach
     * a policy of the specified type to a root or to an OU or account in that root, it
     * must be available in the organization and enabled for that root.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the policy type as it relates to the associated root. To attach
     * a policy of the specified type to a root or to an OU or account in that root, it
     * must be available in the organization and enabled for that root.</p>
     */
    inline void SetStatus(const PolicyTypeStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the policy type as it relates to the associated root. To attach
     * a policy of the specified type to a root or to an OU or account in that root, it
     * must be available in the organization and enabled for that root.</p>
     */
    inline void SetStatus(PolicyTypeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the policy type as it relates to the associated root. To attach
     * a policy of the specified type to a root or to an OU or account in that root, it
     * must be available in the organization and enabled for that root.</p>
     */
    inline PolicyTypeSummary& WithStatus(const PolicyTypeStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the policy type as it relates to the associated root. To attach
     * a policy of the specified type to a root or to an OU or account in that root, it
     * must be available in the organization and enabled for that root.</p>
     */
    inline PolicyTypeSummary& WithStatus(PolicyTypeStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    PolicyType m_type;
    bool m_typeHasBeenSet = false;

    PolicyTypeStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
