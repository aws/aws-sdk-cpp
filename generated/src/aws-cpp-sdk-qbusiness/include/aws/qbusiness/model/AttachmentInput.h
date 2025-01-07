﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/CopyFromSource.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>This is either a file directly uploaded into a web experience chat or a
   * reference to an existing attachment that is part of a web experience
   * chat.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AttachmentInput">AWS
   * API Reference</a></p>
   */
  class AttachmentInput
  {
  public:
    AWS_QBUSINESS_API AttachmentInput();
    AWS_QBUSINESS_API AttachmentInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AttachmentInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The contents of the attachment.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const Aws::Utils::ByteBuffer& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(Aws::Utils::ByteBuffer&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline AttachmentInput& WithData(const Aws::Utils::ByteBuffer& value) { SetData(value); return *this;}
    inline AttachmentInput& WithData(Aws::Utils::ByteBuffer&& value) { SetData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filename of the attachment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AttachmentInput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AttachmentInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AttachmentInput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an existing attachment.</p>
     */
    inline const CopyFromSource& GetCopyFrom() const{ return m_copyFrom; }
    inline bool CopyFromHasBeenSet() const { return m_copyFromHasBeenSet; }
    inline void SetCopyFrom(const CopyFromSource& value) { m_copyFromHasBeenSet = true; m_copyFrom = value; }
    inline void SetCopyFrom(CopyFromSource&& value) { m_copyFromHasBeenSet = true; m_copyFrom = std::move(value); }
    inline AttachmentInput& WithCopyFrom(const CopyFromSource& value) { SetCopyFrom(value); return *this;}
    inline AttachmentInput& WithCopyFrom(CopyFromSource&& value) { SetCopyFrom(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CopyFromSource m_copyFrom;
    bool m_copyFromHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
