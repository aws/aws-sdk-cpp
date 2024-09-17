/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AttachmentsSourceKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Identifying information about a document attachment, including the file name
   * and a key-value pair that identifies the location of an attachment to a
   * document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AttachmentsSource">AWS
   * API Reference</a></p>
   */
  class AttachmentsSource
  {
  public:
    AWS_SSM_API AttachmentsSource();
    AWS_SSM_API AttachmentsSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AttachmentsSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of a key-value pair that identifies the location of an attachment to
     * a document.</p>
     */
    inline const AttachmentsSourceKey& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const AttachmentsSourceKey& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(AttachmentsSourceKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline AttachmentsSource& WithKey(const AttachmentsSourceKey& value) { SetKey(value); return *this;}
    inline AttachmentsSource& WithKey(AttachmentsSourceKey&& value) { SetKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a key-value pair that identifies the location of an attachment
     * to a document. The format for <b>Value</b> depends on the type of key you
     * specify.</p> <ul> <li> <p>For the key <i>SourceUrl</i>, the value is an S3
     * bucket location. For example:</p> <p> <code>"Values": [
     * "s3://amzn-s3-demo-bucket/my-prefix" ]</code> </p> </li> <li> <p>For the key
     * <i>S3FileUrl</i>, the value is a file in an S3 bucket. For example:</p> <p>
     * <code>"Values": [ "s3://amzn-s3-demo-bucket/my-prefix/my-file.py" ]</code> </p>
     * </li> <li> <p>For the key <i>AttachmentReference</i>, the value is constructed
     * from the name of another SSM document in your account, a version number of that
     * document, and a file attached to that document version that you want to reuse.
     * For example:</p> <p> <code>"Values": [ "MyOtherDocument/3/my-other-file.py"
     * ]</code> </p> <p>However, if the SSM document is shared with you from another
     * account, the full SSM document ARN must be specified instead of the document
     * name only. For example:</p> <p> <code>"Values": [
     * "arn:aws:ssm:us-east-2:111122223333:document/OtherAccountDocument/3/their-file.py"
     * ]</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline AttachmentsSource& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline AttachmentsSource& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline AttachmentsSource& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline AttachmentsSource& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline AttachmentsSource& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the document attachment file.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AttachmentsSource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AttachmentsSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AttachmentsSource& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    AttachmentsSourceKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
