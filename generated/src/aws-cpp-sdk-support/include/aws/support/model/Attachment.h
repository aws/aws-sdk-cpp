/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>An attachment to a case communication. The attachment consists of the file
   * name and the content of the file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/Attachment">AWS
   * API Reference</a></p>
   */
  class Attachment
  {
  public:
    AWS_SUPPORT_API Attachment();
    AWS_SUPPORT_API Attachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the attachment file.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }

    /**
     * <p>The name of the attachment file.</p>
     */
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }

    /**
     * <p>The name of the attachment file.</p>
     */
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }

    /**
     * <p>The name of the attachment file.</p>
     */
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }

    /**
     * <p>The name of the attachment file.</p>
     */
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }

    /**
     * <p>The name of the attachment file.</p>
     */
    inline Attachment& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}

    /**
     * <p>The name of the attachment file.</p>
     */
    inline Attachment& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}

    /**
     * <p>The name of the attachment file.</p>
     */
    inline Attachment& WithFileName(const char* value) { SetFileName(value); return *this;}


    /**
     * <p>The content of the attachment file.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const{ return m_data; }

    /**
     * <p>The content of the attachment file.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The content of the attachment file.</p>
     */
    inline void SetData(const Aws::Utils::ByteBuffer& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The content of the attachment file.</p>
     */
    inline void SetData(Aws::Utils::ByteBuffer&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The content of the attachment file.</p>
     */
    inline Attachment& WithData(const Aws::Utils::ByteBuffer& value) { SetData(value); return *this;}

    /**
     * <p>The content of the attachment file.</p>
     */
    inline Attachment& WithData(Aws::Utils::ByteBuffer&& value) { SetData(std::move(value)); return *this;}

  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    Aws::Utils::ByteBuffer m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
