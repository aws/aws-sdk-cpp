/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration settings for the SageMaker Partner AI App.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PartnerAppConfig">AWS
   * API Reference</a></p>
   */
  class PartnerAppConfig
  {
  public:
    AWS_SAGEMAKER_API PartnerAppConfig() = default;
    AWS_SAGEMAKER_API PartnerAppConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PartnerAppConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of users that are given admin access to the SageMaker Partner AI
     * App.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdminUsers() const { return m_adminUsers; }
    inline bool AdminUsersHasBeenSet() const { return m_adminUsersHasBeenSet; }
    template<typename AdminUsersT = Aws::Vector<Aws::String>>
    void SetAdminUsers(AdminUsersT&& value) { m_adminUsersHasBeenSet = true; m_adminUsers = std::forward<AdminUsersT>(value); }
    template<typename AdminUsersT = Aws::Vector<Aws::String>>
    PartnerAppConfig& WithAdminUsers(AdminUsersT&& value) { SetAdminUsers(std::forward<AdminUsersT>(value)); return *this;}
    template<typename AdminUsersT = Aws::String>
    PartnerAppConfig& AddAdminUsers(AdminUsersT&& value) { m_adminUsersHasBeenSet = true; m_adminUsers.emplace_back(std::forward<AdminUsersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is a map of required inputs for a SageMaker Partner AI App. Based on the
     * application type, the map is populated with a key and value pair that is
     * specific to the user and application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const { return m_arguments; }
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
    template<typename ArgumentsT = Aws::Map<Aws::String, Aws::String>>
    void SetArguments(ArgumentsT&& value) { m_argumentsHasBeenSet = true; m_arguments = std::forward<ArgumentsT>(value); }
    template<typename ArgumentsT = Aws::Map<Aws::String, Aws::String>>
    PartnerAppConfig& WithArguments(ArgumentsT&& value) { SetArguments(std::forward<ArgumentsT>(value)); return *this;}
    template<typename ArgumentsKeyT = Aws::String, typename ArgumentsValueT = Aws::String>
    PartnerAppConfig& AddArguments(ArgumentsKeyT&& key, ArgumentsValueT&& value) {
      m_argumentsHasBeenSet = true; m_arguments.emplace(std::forward<ArgumentsKeyT>(key), std::forward<ArgumentsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Aws::String> m_adminUsers;
    bool m_adminUsersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
