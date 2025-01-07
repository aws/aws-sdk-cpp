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
    AWS_SAGEMAKER_API PartnerAppConfig();
    AWS_SAGEMAKER_API PartnerAppConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PartnerAppConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of users that are given admin access to the SageMaker Partner AI
     * App.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdminUsers() const{ return m_adminUsers; }
    inline bool AdminUsersHasBeenSet() const { return m_adminUsersHasBeenSet; }
    inline void SetAdminUsers(const Aws::Vector<Aws::String>& value) { m_adminUsersHasBeenSet = true; m_adminUsers = value; }
    inline void SetAdminUsers(Aws::Vector<Aws::String>&& value) { m_adminUsersHasBeenSet = true; m_adminUsers = std::move(value); }
    inline PartnerAppConfig& WithAdminUsers(const Aws::Vector<Aws::String>& value) { SetAdminUsers(value); return *this;}
    inline PartnerAppConfig& WithAdminUsers(Aws::Vector<Aws::String>&& value) { SetAdminUsers(std::move(value)); return *this;}
    inline PartnerAppConfig& AddAdminUsers(const Aws::String& value) { m_adminUsersHasBeenSet = true; m_adminUsers.push_back(value); return *this; }
    inline PartnerAppConfig& AddAdminUsers(Aws::String&& value) { m_adminUsersHasBeenSet = true; m_adminUsers.push_back(std::move(value)); return *this; }
    inline PartnerAppConfig& AddAdminUsers(const char* value) { m_adminUsersHasBeenSet = true; m_adminUsers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is a map of required inputs for a SageMaker Partner AI App. Based on the
     * application type, the map is populated with a key and value pair that is
     * specific to the user and application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }
    inline PartnerAppConfig& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}
    inline PartnerAppConfig& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}
    inline PartnerAppConfig& AddArguments(const Aws::String& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }
    inline PartnerAppConfig& AddArguments(Aws::String&& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }
    inline PartnerAppConfig& AddArguments(const Aws::String& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }
    inline PartnerAppConfig& AddArguments(Aws::String&& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), std::move(value)); return *this; }
    inline PartnerAppConfig& AddArguments(const char* key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }
    inline PartnerAppConfig& AddArguments(Aws::String&& key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }
    inline PartnerAppConfig& AddArguments(const char* key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }
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
