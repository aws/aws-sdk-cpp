﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>

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
namespace mgn
{
namespace Model
{

  /**
   * <p>Import task summary servers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ImportTaskSummaryServers">AWS
   * API Reference</a></p>
   */
  class ImportTaskSummaryServers
  {
  public:
    AWS_MGN_API ImportTaskSummaryServers() = default;
    AWS_MGN_API ImportTaskSummaryServers(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ImportTaskSummaryServers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Import task summary servers created count.</p>
     */
    inline long long GetCreatedCount() const { return m_createdCount; }
    inline bool CreatedCountHasBeenSet() const { return m_createdCountHasBeenSet; }
    inline void SetCreatedCount(long long value) { m_createdCountHasBeenSet = true; m_createdCount = value; }
    inline ImportTaskSummaryServers& WithCreatedCount(long long value) { SetCreatedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task summary servers modified count.</p>
     */
    inline long long GetModifiedCount() const { return m_modifiedCount; }
    inline bool ModifiedCountHasBeenSet() const { return m_modifiedCountHasBeenSet; }
    inline void SetModifiedCount(long long value) { m_modifiedCountHasBeenSet = true; m_modifiedCount = value; }
    inline ImportTaskSummaryServers& WithModifiedCount(long long value) { SetModifiedCount(value); return *this;}
    ///@}
  private:

    long long m_createdCount{0};
    bool m_createdCountHasBeenSet = false;

    long long m_modifiedCount{0};
    bool m_modifiedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
