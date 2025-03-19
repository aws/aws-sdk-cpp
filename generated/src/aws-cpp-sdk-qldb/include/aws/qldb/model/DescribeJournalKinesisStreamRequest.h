/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QLDB
{
namespace Model
{

  /**
   */
  class DescribeJournalKinesisStreamRequest : public QLDBRequest
  {
  public:
    AWS_QLDB_API DescribeJournalKinesisStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJournalKinesisStream"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetLedgerName() const { return m_ledgerName; }
    inline bool LedgerNameHasBeenSet() const { return m_ledgerNameHasBeenSet; }
    template<typename LedgerNameT = Aws::String>
    void SetLedgerName(LedgerNameT&& value) { m_ledgerNameHasBeenSet = true; m_ledgerName = std::forward<LedgerNameT>(value); }
    template<typename LedgerNameT = Aws::String>
    DescribeJournalKinesisStreamRequest& WithLedgerName(LedgerNameT&& value) { SetLedgerName(std::forward<LedgerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UUID (represented in Base62-encoded text) of the QLDB journal stream to
     * describe.</p>
     */
    inline const Aws::String& GetStreamId() const { return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    template<typename StreamIdT = Aws::String>
    void SetStreamId(StreamIdT&& value) { m_streamIdHasBeenSet = true; m_streamId = std::forward<StreamIdT>(value); }
    template<typename StreamIdT = Aws::String>
    DescribeJournalKinesisStreamRequest& WithStreamId(StreamIdT&& value) { SetStreamId(std::forward<StreamIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ledgerName;
    bool m_ledgerNameHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
