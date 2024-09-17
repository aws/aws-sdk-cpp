/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ServiceType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The authorized targets that are associated with a service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AuthorizedTargetsByService">AWS
   * API Reference</a></p>
   */
  class AuthorizedTargetsByService
  {
  public:
    AWS_QUICKSIGHT_API AuthorizedTargetsByService();
    AWS_QUICKSIGHT_API AuthorizedTargetsByService(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AuthorizedTargetsByService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Web Services service.</p>
     */
    inline const ServiceType& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const ServiceType& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(ServiceType&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline AuthorizedTargetsByService& WithService(const ServiceType& value) { SetService(value); return *this;}
    inline AuthorizedTargetsByService& WithService(ServiceType&& value) { SetService(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Aist of authorized targets that are represented by IAM Identity Center
     * application ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedTargets() const{ return m_authorizedTargets; }
    inline bool AuthorizedTargetsHasBeenSet() const { return m_authorizedTargetsHasBeenSet; }
    inline void SetAuthorizedTargets(const Aws::Vector<Aws::String>& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = value; }
    inline void SetAuthorizedTargets(Aws::Vector<Aws::String>&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = std::move(value); }
    inline AuthorizedTargetsByService& WithAuthorizedTargets(const Aws::Vector<Aws::String>& value) { SetAuthorizedTargets(value); return *this;}
    inline AuthorizedTargetsByService& WithAuthorizedTargets(Aws::Vector<Aws::String>&& value) { SetAuthorizedTargets(std::move(value)); return *this;}
    inline AuthorizedTargetsByService& AddAuthorizedTargets(const Aws::String& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(value); return *this; }
    inline AuthorizedTargetsByService& AddAuthorizedTargets(Aws::String&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(std::move(value)); return *this; }
    inline AuthorizedTargetsByService& AddAuthorizedTargets(const char* value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(value); return *this; }
    ///@}
  private:

    ServiceType m_service;
    bool m_serviceHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedTargets;
    bool m_authorizedTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
