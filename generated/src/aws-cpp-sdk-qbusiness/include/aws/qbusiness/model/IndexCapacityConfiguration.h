/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>

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
   * <p>Provides information about index capacity configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/IndexCapacityConfiguration">AWS
   * API Reference</a></p>
   */
  class IndexCapacityConfiguration
  {
  public:
    AWS_QBUSINESS_API IndexCapacityConfiguration();
    AWS_QBUSINESS_API IndexCapacityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API IndexCapacityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of storage units configured for an Amazon Q index.</p>
     */
    inline int GetUnits() const{ return m_units; }

    /**
     * <p>The number of storage units configured for an Amazon Q index.</p>
     */
    inline bool UnitsHasBeenSet() const { return m_unitsHasBeenSet; }

    /**
     * <p>The number of storage units configured for an Amazon Q index.</p>
     */
    inline void SetUnits(int value) { m_unitsHasBeenSet = true; m_units = value; }

    /**
     * <p>The number of storage units configured for an Amazon Q index.</p>
     */
    inline IndexCapacityConfiguration& WithUnits(int value) { SetUnits(value); return *this;}

  private:

    int m_units;
    bool m_unitsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
