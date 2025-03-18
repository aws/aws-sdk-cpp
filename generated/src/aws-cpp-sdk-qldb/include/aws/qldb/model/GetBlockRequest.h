/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/ValueHolder.h>
#include <utility>

namespace Aws
{
namespace QLDB
{
namespace Model
{

  /**
   */
  class GetBlockRequest : public QLDBRequest
  {
  public:
    AWS_QLDB_API GetBlockRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBlock"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetBlockRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the block that you want to request. An address is an Amazon
     * Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline const ValueHolder& GetBlockAddress() const { return m_blockAddress; }
    inline bool BlockAddressHasBeenSet() const { return m_blockAddressHasBeenSet; }
    template<typename BlockAddressT = ValueHolder>
    void SetBlockAddress(BlockAddressT&& value) { m_blockAddressHasBeenSet = true; m_blockAddress = std::forward<BlockAddressT>(value); }
    template<typename BlockAddressT = ValueHolder>
    GetBlockRequest& WithBlockAddress(BlockAddressT&& value) { SetBlockAddress(std::forward<BlockAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline const ValueHolder& GetDigestTipAddress() const { return m_digestTipAddress; }
    inline bool DigestTipAddressHasBeenSet() const { return m_digestTipAddressHasBeenSet; }
    template<typename DigestTipAddressT = ValueHolder>
    void SetDigestTipAddress(DigestTipAddressT&& value) { m_digestTipAddressHasBeenSet = true; m_digestTipAddress = std::forward<DigestTipAddressT>(value); }
    template<typename DigestTipAddressT = ValueHolder>
    GetBlockRequest& WithDigestTipAddress(DigestTipAddressT&& value) { SetDigestTipAddress(std::forward<DigestTipAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ValueHolder m_blockAddress;
    bool m_blockAddressHasBeenSet = false;

    ValueHolder m_digestTipAddress;
    bool m_digestTipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
