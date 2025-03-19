/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/DataLakeLifecycleExpiration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/DataLakeLifecycleTransition.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Provides lifecycle details of Amazon Security Lake object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeLifecycleConfiguration">AWS
   * API Reference</a></p>
   */
  class DataLakeLifecycleConfiguration
  {
  public:
    AWS_SECURITYLAKE_API DataLakeLifecycleConfiguration() = default;
    AWS_SECURITYLAKE_API DataLakeLifecycleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeLifecycleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides data expiration details of Amazon Security Lake object.</p>
     */
    inline const DataLakeLifecycleExpiration& GetExpiration() const { return m_expiration; }
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
    template<typename ExpirationT = DataLakeLifecycleExpiration>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = DataLakeLifecycleExpiration>
    DataLakeLifecycleConfiguration& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides data storage transition details of Amazon Security Lake object.</p>
     */
    inline const Aws::Vector<DataLakeLifecycleTransition>& GetTransitions() const { return m_transitions; }
    inline bool TransitionsHasBeenSet() const { return m_transitionsHasBeenSet; }
    template<typename TransitionsT = Aws::Vector<DataLakeLifecycleTransition>>
    void SetTransitions(TransitionsT&& value) { m_transitionsHasBeenSet = true; m_transitions = std::forward<TransitionsT>(value); }
    template<typename TransitionsT = Aws::Vector<DataLakeLifecycleTransition>>
    DataLakeLifecycleConfiguration& WithTransitions(TransitionsT&& value) { SetTransitions(std::forward<TransitionsT>(value)); return *this;}
    template<typename TransitionsT = DataLakeLifecycleTransition>
    DataLakeLifecycleConfiguration& AddTransitions(TransitionsT&& value) { m_transitionsHasBeenSet = true; m_transitions.emplace_back(std::forward<TransitionsT>(value)); return *this; }
    ///@}
  private:

    DataLakeLifecycleExpiration m_expiration;
    bool m_expirationHasBeenSet = false;

    Aws::Vector<DataLakeLifecycleTransition> m_transitions;
    bool m_transitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
