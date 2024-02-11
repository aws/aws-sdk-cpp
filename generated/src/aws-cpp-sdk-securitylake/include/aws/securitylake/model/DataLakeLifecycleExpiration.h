/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>

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
   * <p>Provide expiration lifecycle details of Amazon Security Lake
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeLifecycleExpiration">AWS
   * API Reference</a></p>
   */
  class DataLakeLifecycleExpiration
  {
  public:
    AWS_SECURITYLAKE_API DataLakeLifecycleExpiration();
    AWS_SECURITYLAKE_API DataLakeLifecycleExpiration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeLifecycleExpiration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of days before data expires in the Amazon Security Lake object.</p>
     */
    inline int GetDays() const{ return m_days; }

    /**
     * <p>Number of days before data expires in the Amazon Security Lake object.</p>
     */
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }

    /**
     * <p>Number of days before data expires in the Amazon Security Lake object.</p>
     */
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }

    /**
     * <p>Number of days before data expires in the Amazon Security Lake object.</p>
     */
    inline DataLakeLifecycleExpiration& WithDays(int value) { SetDays(value); return *this;}

  private:

    int m_days;
    bool m_daysHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
