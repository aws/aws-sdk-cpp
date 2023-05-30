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
    AWS_SECURITYLAKE_API DataLakeLifecycleConfiguration();
    AWS_SECURITYLAKE_API DataLakeLifecycleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeLifecycleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides data expiration details of Amazon Security Lake object.</p>
     */
    inline const DataLakeLifecycleExpiration& GetExpiration() const{ return m_expiration; }

    /**
     * <p>Provides data expiration details of Amazon Security Lake object.</p>
     */
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }

    /**
     * <p>Provides data expiration details of Amazon Security Lake object.</p>
     */
    inline void SetExpiration(const DataLakeLifecycleExpiration& value) { m_expirationHasBeenSet = true; m_expiration = value; }

    /**
     * <p>Provides data expiration details of Amazon Security Lake object.</p>
     */
    inline void SetExpiration(DataLakeLifecycleExpiration&& value) { m_expirationHasBeenSet = true; m_expiration = std::move(value); }

    /**
     * <p>Provides data expiration details of Amazon Security Lake object.</p>
     */
    inline DataLakeLifecycleConfiguration& WithExpiration(const DataLakeLifecycleExpiration& value) { SetExpiration(value); return *this;}

    /**
     * <p>Provides data expiration details of Amazon Security Lake object.</p>
     */
    inline DataLakeLifecycleConfiguration& WithExpiration(DataLakeLifecycleExpiration&& value) { SetExpiration(std::move(value)); return *this;}


    /**
     * <p>Provides data storage transition details of Amazon Security Lake object.</p>
     */
    inline const Aws::Vector<DataLakeLifecycleTransition>& GetTransitions() const{ return m_transitions; }

    /**
     * <p>Provides data storage transition details of Amazon Security Lake object.</p>
     */
    inline bool TransitionsHasBeenSet() const { return m_transitionsHasBeenSet; }

    /**
     * <p>Provides data storage transition details of Amazon Security Lake object.</p>
     */
    inline void SetTransitions(const Aws::Vector<DataLakeLifecycleTransition>& value) { m_transitionsHasBeenSet = true; m_transitions = value; }

    /**
     * <p>Provides data storage transition details of Amazon Security Lake object.</p>
     */
    inline void SetTransitions(Aws::Vector<DataLakeLifecycleTransition>&& value) { m_transitionsHasBeenSet = true; m_transitions = std::move(value); }

    /**
     * <p>Provides data storage transition details of Amazon Security Lake object.</p>
     */
    inline DataLakeLifecycleConfiguration& WithTransitions(const Aws::Vector<DataLakeLifecycleTransition>& value) { SetTransitions(value); return *this;}

    /**
     * <p>Provides data storage transition details of Amazon Security Lake object.</p>
     */
    inline DataLakeLifecycleConfiguration& WithTransitions(Aws::Vector<DataLakeLifecycleTransition>&& value) { SetTransitions(std::move(value)); return *this;}

    /**
     * <p>Provides data storage transition details of Amazon Security Lake object.</p>
     */
    inline DataLakeLifecycleConfiguration& AddTransitions(const DataLakeLifecycleTransition& value) { m_transitionsHasBeenSet = true; m_transitions.push_back(value); return *this; }

    /**
     * <p>Provides data storage transition details of Amazon Security Lake object.</p>
     */
    inline DataLakeLifecycleConfiguration& AddTransitions(DataLakeLifecycleTransition&& value) { m_transitionsHasBeenSet = true; m_transitions.push_back(std::move(value)); return *this; }

  private:

    DataLakeLifecycleExpiration m_expiration;
    bool m_expirationHasBeenSet = false;

    Aws::Vector<DataLakeLifecycleTransition> m_transitions;
    bool m_transitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
