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
  class GetRevisionRequest : public QLDBRequest
  {
  public:
    AWS_QLDB_API GetRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRevision"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline GetRevisionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline GetRevisionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline GetRevisionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The block location of the document revision to be verified. An address is an
     * Amazon Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline const ValueHolder& GetBlockAddress() const{ return m_blockAddress; }

    /**
     * <p>The block location of the document revision to be verified. An address is an
     * Amazon Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline bool BlockAddressHasBeenSet() const { return m_blockAddressHasBeenSet; }

    /**
     * <p>The block location of the document revision to be verified. An address is an
     * Amazon Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline void SetBlockAddress(const ValueHolder& value) { m_blockAddressHasBeenSet = true; m_blockAddress = value; }

    /**
     * <p>The block location of the document revision to be verified. An address is an
     * Amazon Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline void SetBlockAddress(ValueHolder&& value) { m_blockAddressHasBeenSet = true; m_blockAddress = std::move(value); }

    /**
     * <p>The block location of the document revision to be verified. An address is an
     * Amazon Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline GetRevisionRequest& WithBlockAddress(const ValueHolder& value) { SetBlockAddress(value); return *this;}

    /**
     * <p>The block location of the document revision to be verified. An address is an
     * Amazon Ion structure that has two fields: <code>strandId</code> and
     * <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:14}</code>.</p>
     */
    inline GetRevisionRequest& WithBlockAddress(ValueHolder&& value) { SetBlockAddress(std::move(value)); return *this;}


    /**
     * <p>The UUID (represented in Base62-encoded text) of the document to be
     * verified.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the document to be
     * verified.</p>
     */
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the document to be
     * verified.</p>
     */
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the document to be
     * verified.</p>
     */
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the document to be
     * verified.</p>
     */
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the document to be
     * verified.</p>
     */
    inline GetRevisionRequest& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The UUID (represented in Base62-encoded text) of the document to be
     * verified.</p>
     */
    inline GetRevisionRequest& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The UUID (represented in Base62-encoded text) of the document to be
     * verified.</p>
     */
    inline GetRevisionRequest& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline const ValueHolder& GetDigestTipAddress() const{ return m_digestTipAddress; }

    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline bool DigestTipAddressHasBeenSet() const { return m_digestTipAddressHasBeenSet; }

    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline void SetDigestTipAddress(const ValueHolder& value) { m_digestTipAddressHasBeenSet = true; m_digestTipAddress = value; }

    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline void SetDigestTipAddress(ValueHolder&& value) { m_digestTipAddressHasBeenSet = true; m_digestTipAddress = std::move(value); }

    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline GetRevisionRequest& WithDigestTipAddress(const ValueHolder& value) { SetDigestTipAddress(value); return *this;}

    /**
     * <p>The latest block location covered by the digest for which to request a proof.
     * An address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p> <p>For example:
     * <code>{strandId:"BlFTjlSXze9BIh1KOszcE3",sequenceNo:49}</code>.</p>
     */
    inline GetRevisionRequest& WithDigestTipAddress(ValueHolder&& value) { SetDigestTipAddress(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ValueHolder m_blockAddress;
    bool m_blockAddressHasBeenSet = false;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    ValueHolder m_digestTipAddress;
    bool m_digestTipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
