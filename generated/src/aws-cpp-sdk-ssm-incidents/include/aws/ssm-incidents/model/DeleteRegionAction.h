/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Defines the information about the Amazon Web Services Region you're deleting
   * from your replication set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteRegionAction">AWS
   * API Reference</a></p>
   */
  class DeleteRegionAction
  {
  public:
    AWS_SSMINCIDENTS_API DeleteRegionAction();
    AWS_SSMINCIDENTS_API DeleteRegionAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API DeleteRegionAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon Web Services Region you're deleting from the
     * replication set.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The name of the Amazon Web Services Region you're deleting from the
     * replication set.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services Region you're deleting from the
     * replication set.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The name of the Amazon Web Services Region you're deleting from the
     * replication set.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services Region you're deleting from the
     * replication set.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The name of the Amazon Web Services Region you're deleting from the
     * replication set.</p>
     */
    inline DeleteRegionAction& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services Region you're deleting from the
     * replication set.</p>
     */
    inline DeleteRegionAction& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Services Region you're deleting from the
     * replication set.</p>
     */
    inline DeleteRegionAction& WithRegionName(const char* value) { SetRegionName(value); return *this;}

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
