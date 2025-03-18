/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/DataReplicationInitiationStepName.h>
#include <aws/mgn/model/DataReplicationInitiationStepStatus.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Data replication initiation step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DataReplicationInitiationStep">AWS
   * API Reference</a></p>
   */
  class DataReplicationInitiationStep
  {
  public:
    AWS_MGN_API DataReplicationInitiationStep() = default;
    AWS_MGN_API DataReplicationInitiationStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API DataReplicationInitiationStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Request to query data initiation step name.</p>
     */
    inline DataReplicationInitiationStepName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(DataReplicationInitiationStepName value) { m_nameHasBeenSet = true; m_name = value; }
    inline DataReplicationInitiationStep& WithName(DataReplicationInitiationStepName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to query data initiation status.</p>
     */
    inline DataReplicationInitiationStepStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataReplicationInitiationStepStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataReplicationInitiationStep& WithStatus(DataReplicationInitiationStepStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    DataReplicationInitiationStepName m_name{DataReplicationInitiationStepName::NOT_SET};
    bool m_nameHasBeenSet = false;

    DataReplicationInitiationStepStatus m_status{DataReplicationInitiationStepStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
